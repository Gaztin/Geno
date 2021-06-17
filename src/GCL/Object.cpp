/*
 * Copyright (c) 2021 Sebastian Kylander https://gaztin.com/
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

#include "Common/Macros.h"
#include "Common/TypeTraits.h"

//////////////////////////////////////////////////////////////////////////

GCL::Object::Object( std::string Name )
	: m_Name( std::move( Name ) )
{
} // Object

//////////////////////////////////////////////////////////////////////////

GCL::Object::Object( Object&& rrOther ) noexcept
{
	*this = std::move( rrOther );

} // Object

//////////////////////////////////////////////////////////////////////////

GCL::Object& GCL::Object::operator=( Object&& rrOther ) noexcept
{
	m_Name = std::move( rrOther.m_Name );
	m_Value.swap( rrOther.m_Value );

	return *this;

} // operator=

//////////////////////////////////////////////////////////////////////////

GCL::Object::StringType& GCL::Object::SetString( std::string String )
{
	if( IsString() )
		return std::get< StringType >( m_Value ).assign( std::move( String ) );
	else
		return m_Value.emplace< StringType >( std::move( String ) );

} // SetString

//////////////////////////////////////////////////////////////////////////

GCL::Object::TableType& GCL::Object::SetTable( void )
{
	if( IsTable() )
		return std::get< TableType >( m_Value );
	else
		return m_Value.emplace< TableType >();

} // SetTable

//////////////////////////////////////////////////////////////////////////

GCL::Object& GCL::Object::AddChild( Object Child )
{
	TableType& rTable = std::get< TableType >( m_Value );

	return rTable.emplace_back( std::move( Child ) );

} // AddChild

//////////////////////////////////////////////////////////////////////////

const GCL::Object::StringType& GCL::Object::String( void ) const
{
	// Valueless objects can be considered strings in some sense
	if( IsNull() ) return m_Name;
	else           return std::get< StringType >( m_Value );

} // String

//////////////////////////////////////////////////////////////////////////

const GCL::Object::TableType& GCL::Object::Table( void ) const
{
	return std::get< TableType >( m_Value );

} // Table

//////////////////////////////////////////////////////////////////////////

bool GCL::Object::Empty( void ) const
{
	switch( m_Value.index() )
	{
		case( UNIQUE_INDEX< StringType, Variant > ): return std::get< StringType >( m_Value ).empty();
		case( UNIQUE_INDEX< TableType,  Variant > ): return std::get< TableType  >( m_Value ).empty();
		default:                                     return true;
	}

} // Empty

//////////////////////////////////////////////////////////////////////////

GCL::Object& GCL::Object::operator[]( std::string_view Name )
{
	TableType& rTable = std::get< TableType >( m_Value );

	for( Object& rValue : rTable )
	{
		if( rValue.m_Name == Name )
			return rValue;
	}

	return rTable.emplace_back( std::string( Name ) );

} // operator[]

//////////////////////////////////////////////////////////////////////////

GCL::Object& GCL::Object::operator=( std::string String )
{
	SetString( std::move( String ) );

	return *this;

} // operator=

//////////////////////////////////////////////////////////////////////////

bool GCL::Object::operator==( std::string_view String ) const
{
	if( IsString() )
		return std::get< StringType >( m_Value ).compare( String ) == 0;

	return false;

} // operator==
