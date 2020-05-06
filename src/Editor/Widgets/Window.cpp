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

#include "Window.h"

#include "Editor/Platform/Win32/WindowClass.h"
#include "Editor/Widgets/MenuItem.h"

ALV_NAMESPACE_BEGIN

Window::Window( void )
{
	static Platform::WindowClass window_class( WndProc );

	hwnd_ = CreateWindowExW( WS_EX_OVERLAPPEDWINDOW, window_class.GetName(), NULL, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, GetModuleHandleW( NULL ), this );

	SetWindowLongPtrW( hwnd_, GWL_USERDATA, reinterpret_cast< LONG >( this ) );
}

Window::Window( Window&& other )
	: hwnd_( other.hwnd_ )
{
	other.hwnd_ = NULL;

	SetWindowLongPtrW( hwnd_, GWL_USERDATA, reinterpret_cast< LONG >( this ) );
}

Window::~Window( void )
{
	if( hwnd_ )
		DestroyWindow( hwnd_ );
}

Window& Window::operator=( Window&& other )
{
	hwnd_ = other.hwnd_;

	other.hwnd_ = NULL;

	SetWindowLongPtrW( hwnd_, GWL_USERDATA, reinterpret_cast< LONG >( this ) );

	return *this;
}

void Window::Show( void )
{
	ShowWindow( hwnd_, SW_SHOW );
}

void Window::Hide( void )
{
	ShowWindow( hwnd_, SW_HIDE );
}

void Window::PollEvents( void )
{
	MSG msg;

	while( PeekMessageW( &msg, hwnd_, 0, 0, PM_REMOVE ) )
	{
		TranslateMessage( &msg );
		DispatchMessageW( &msg );
	}
}

void Window::SetMenu( Menu menu )
{
	::SetMenu( hwnd_, menu.GetNativeHandle() );

	menu_.emplace( std::move( menu ) );
}

bool Window::IsOpen( void ) const
{
	return IsWindow( hwnd_ );
}

LRESULT CALLBACK Window::WndProc( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam )
{
	return DefWindowProcW( hwnd, msg, wparam, lparam );
}

ALV_NAMESPACE_END
