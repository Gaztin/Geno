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
#include <Common/Macros.h>
#include <Common/Texture2D.h>

#include <filesystem>
#include <string>
#include <vector>

class  Drop;
struct ImGuiInputTextCallbackData;

class TextEditWidget
{
	GENO_SINGLETON( TextEditWidget );

	TextEditWidget( void ) = default;

//////////////////////////////////////////////////////////////////////////

public:

	struct File
	{
		std::filesystem::path Path;
		std::string           Text;

		bool                  Open = true;

	}; // File

//////////////////////////////////////////////////////////////////////////

	void Show      ( bool* pOpen );
	void AddFile   ( const std::filesystem::path& rPath );
	void OnDragDrop( const Drop& rDrop, int X, int Y );

//////////////////////////////////////////////////////////////////////////

private:

	Texture2D           m_DraggedBitmapTexture;

	std::vector< File > m_Files;

}; // TextEditWidget
