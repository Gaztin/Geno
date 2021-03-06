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
#include "Common/Macros.h"
#include "Common/Texture2D.h"
#include "Components/BuildMatrix.h"
#include "GUI/Modals/IModal.h"

class BuildMatrixModal : public IModal
{
	GENO_SINGLETON( BuildMatrixModal );

	BuildMatrixModal( void );

//////////////////////////////////////////////////////////////////////////

public:

	void Show( void );

//////////////////////////////////////////////////////////////////////////

private:

	std::string PopupID      ( void ) override;
	std::string Title        ( void ) override;
	void        UpdateDerived( void ) override;

//////////////////////////////////////////////////////////////////////////

	void DrawColumns( void );
	void DrawSidebar( void );

//////////////////////////////////////////////////////////////////////////

	Texture2D   m_TextureColumnMenuIcon;
	Texture2D   m_TextureNewColumn;

	std::string m_NameEditText;
	std::string m_ColumnNameEditText;

	ptrdiff_t   m_SelectedColumnIndex        = -1;
	ptrdiff_t   m_SelectedConfigurationIndex = -1;
	ptrdiff_t   m_ColumnNameEditedIndex      = -1;

}; // BuildMatrixModal
