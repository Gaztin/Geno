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

#pragma once
#if defined( _WIN32 )

#include <string_view>

#include <Windows.h>

extern bool _Win32HandleResult( DWORD   Result, std::string_view Function, std::string_view File, int Line );
extern bool _Win32HandleResult( HRESULT Result, std::string_view Function, std::string_view File, int Line );
extern bool _Win32HandleResult( BOOL    Result, std::string_view Function, std::string_view File, int Line );

#define WIN32_CALL( X ) ( ::_Win32HandleResult( ( X ), #X, __FILE__, __LINE__ ) )

#endif // _WIN32
