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

#include "WindowClass.h"

ALV_NAMESPACE_BEGIN

namespace Platform
{
	constexpr LPCWSTR class_name = L"AlvWC";

	WindowClass::WindowClass( WNDPROC wndproc )
		: atom_( NULL )
	{
		WNDCLASSEXW info{ };
		info.cbSize        = sizeof( WNDCLASSEXW );
		info.style         = CS_VREDRAW | CS_HREDRAW | CS_OWNDC;
		info.lpfnWndProc   = wndproc;
		info.hInstance     = GetModuleHandleW( NULL );
		info.hbrBackground = reinterpret_cast< HBRUSH >( COLOR_WINDOW );
		info.lpszClassName = class_name;

		atom_ = RegisterClassExW( &info );
	}

	WindowClass::~WindowClass( void )
	{
		HINSTANCE module = GetModuleHandleW( NULL );

		UnregisterClassW( class_name, module );
	}

	LPCWSTR WindowClass::GetName( void ) const
	{
		return class_name;
	}
}

ALV_NAMESPACE_END
