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

#pragma once
#include "Editor/Widgets/Menu.h"

#include <optional>
#include <string_view>
#include <string>

ALV_NAMESPACE_BEGIN

class MenuItem
{
	ALV_DISABLE_COPY( MenuItem );

public:

	explicit MenuItem( std::wstring_view name );
	         MenuItem( MenuItem&& ) = default;

	MenuItem& operator=( MenuItem&& other ) = default;

public:

	void SetDropdownMenu( Menu menu );

public:

	std::wstring_view GetName        ( void ) const { return name_; }
	bool              HasDropdownMenu( void ) const { return !!dropdown_menu_; }
	const Menu&       GetDropdownMenu( void ) const { return *dropdown_menu_; }

private:

	std::wstring          name_;

	std::optional< Menu > dropdown_menu_;

};

ALV_NAMESPACE_END
