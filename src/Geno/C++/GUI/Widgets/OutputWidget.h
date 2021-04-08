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
#include "Common/Macros.h"

#include <string>

#if defined( _WIN32 )
#include <Windows.h>
#endif // _WIN32

class OutputWidget
{
	GENO_SINGLETON( OutputWidget );

	 OutputWidget( void );
	~OutputWidget( void );

//////////////////////////////////////////////////////////////////////////

public:

	void Show        ( bool* pOpen );
	void ClearCapture( void );

//////////////////////////////////////////////////////////////////////////

private:

	void RedirectOutputStream( int* pFileDescriptor, FILE* pFileStream );
	void Capture             ( void );

//////////////////////////////////////////////////////////////////////////

	std::string m_Captured;

	int         m_Pipe[ 2 ] = { };
	int         m_StdOut    = 0;
	int         m_StdErr    = 0;
	int         m_OldStdOut = 0;
	int         m_OldStdErr = 0;

}; // OutputWidget
