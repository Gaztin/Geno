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
#include "IModal.h"

#include <functional>
#include <map>
#include <string>

class MessageModal : public IModal
{
	GENO_SINGLETON( MessageModal );

	MessageModal( void ) = default;

//////////////////////////////////////////////////////////////////////////

public:
	using Callback = std::function< void( void ) >;

	void ShowMessage( std::string Message, const char* pButtonLabel, Callback Callback );

//////////////////////////////////////////////////////////////////////////

private:
	std::string PopupID( void ) override { return "Message"; }
	std::string Title( void ) override { return "Geno"; }
	void        UpdateDerived( void ) override;
	void        OnClose( void ) override;

//////////////////////////////////////////////////////////////////////////

	std::string m_Message;
	const char* m_pButtonLabel;
	Callback    m_Callback;
};
