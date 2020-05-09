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

#include "Core/Compiler.h"
#include "Core/Console.h"
#include "Editor/Widgets/Menu.h"
#include "Editor/Widgets/Window.h"

#include <cstdlib>
#include <thread>

#include <Windows.h>

static void ActionSave( Alv::MenuItemClicked )
{
	printf( "Saving...\n" );
}

static Alv::Menu SetupRootMenu( void )
{
	Alv::Menu menu;

	Alv::Menu menu_file;
	menu_file.AddItem( Alv::MenuItem( L"Open" ) );
	menu_file.AddItem( Alv::MenuItem( L"Save" ) <<= ActionSave );
	menu_file.AddSeparator();
	menu_file.AddItem( Alv::MenuItem( L"Settings" ) );

	Alv::MenuItem item_file( L"File" );
	item_file.SetDropdownMenu( std::move( menu_file ) );
	menu.AddItem( std::move( item_file ) );

	Alv::Menu menu_build;
	menu_build.AddItem( Alv::MenuItem( L"Build" ) );
	menu_build.AddItem( Alv::MenuItem( L"Rebuild" ) );
	menu_build.AddItem( Alv::MenuItem( L"Clean" ) );

	Alv::MenuItem item_build( L"Build" );
	item_build.SetDropdownMenu( std::move( menu_build ) );
	menu.AddItem( std::move( item_build ) );

	return menu;
}

int WINAPI WinMain( HINSTANCE /*instance*/, HINSTANCE /*prev_instance*/, LPSTR /*cmd_line*/, int /*show_cmd*/ )
{
	Alv::Console  console;
	Alv::Compiler compiler( CFG_LLVM_LOCATION );
	Alv::Window   window;
	Alv::Menu     menu = SetupRootMenu();

	window.SetMenu( std::move( menu ) );
	window.Show();

	while( window.IsOpen() )
	{
		window.PollEvents();
	}

	return 0;
}