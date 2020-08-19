/*
 * Copyright (c) 2020 Sebastian Kylander https://gaztin.com/
 *
 * This software is provided 'as-is', without any express or implied warranty. In no event will
 * the authors be held liable for any damages arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose, including commercial
 * applications, and to alter it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not claim that you wrote the
 *    original software. If you use this software in a product, an acknowledgment in the product
 *    documentation would be appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be misrepresented as
 *    being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#include "GCL/Object.h"

#include <Common/Macros.h>
#include <Common/TypeTraits.h>

namespace GCL
{
	Object::Object( std::string_view key )
		: key_( key )
	{
	}

	Object::Object( Object&& other )
	{
		*this = std::move( other );
	}

	Object& Object::operator=( Object&& other )
	{
		key_ = std::move( other.key_ );
		value_.swap( other.value_ );

		return *this;
	}

	void Object::SetString( std::string_view string )
	{
		if( IsString() ) std::get< StringType >( value_ ).assign( string );
		else             value_.emplace< StringType >( string );
	}

	void Object::AddArrayItem( std::string_view item )
	{
		ArrayType& underlying_array = IsArray() ? std::get< ArrayType >( value_ ) : value_.emplace< ArrayType >();

		underlying_array.emplace_back( item );
	}

	void Object::AddChild( Object child )
	{
		TableType& underlying_table_vector = IsTable() ? std::get< TableType >( value_ ) : value_.emplace< TableType >();

		underlying_table_vector.emplace_back( std::move( child ) );
	}

	const Object::StringType& Object::String( void ) const
	{
		return std::get< StringType >( value_ );
	}

	const Object::ArrayType& Object::Array( void ) const
	{
		return std::get< ArrayType >( value_ );
	}

	const Object::TableType& Object::Table( void ) const
	{
		return std::get< TableType >( value_ );
	}

	bool Object::Empty( void ) const
	{
		switch( value_.index() )
		{
			case( unique_index_v< StringType, Variant > ): return std::get< StringType >( value_ ).empty();
			case( unique_index_v< ArrayType,  Variant > ): return std::get< ArrayType  >( value_ ).empty();
			case( unique_index_v< TableType,  Variant > ): return std::get< TableType  >( value_ ).empty();
			default:                                       return true;
		}
	}

	Object& Object::operator[]( std::string_view key )
	{
		TableType& table = std::get< TableType >( value_ );

		for( Object& value : table )
		{
			if( value.key_ == key )
				return value;
		}

		return table.emplace_back( key );
	}

	Object& Object::operator=( std::string_view string )
	{
		SetString( string );

		return *this;
	}

	bool Object::operator==( std::string_view string ) const
	{
		if( IsString() )
			return std::get< StringType >( value_ ).compare( string ) == 0;

		return false;
	}
}
