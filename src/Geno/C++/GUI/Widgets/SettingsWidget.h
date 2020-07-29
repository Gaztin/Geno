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
#include "Core/Macros.h"

#include <filesystem>

class SettingsWidget
{
	GENO_SINGLETON( SettingsWidget );

public:

	void Show( bool* p_open );

private:

	void UpdateTheme( void );

private:

	int current_panel_item_ = 0;
	int current_theme_      = -1;

	bool open_;

#if defined( _WIN32 )
	std::filesystem::path mingw_path_;
#elif defined( __linux__ ) // _WIN32
	std::filesystem::path llvm_path_;
#endif // __linux

};
