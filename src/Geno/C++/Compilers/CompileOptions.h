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
#include <filesystem>
#include <vector>

struct CompileOptions
{
	enum class Language
	{
		Unspecified,
		C,
		CPlusPlus,
		Assembler,

	}; // Language

	enum class Action
	{
		All,
		OnlyPreprocess,
		OnlyCompile,
		CompileAndAssemble,

	}; // Action

	enum AssemblerFlags
	{
		AssemblerFlagReduceMemoryOverheads = 0x01,

	}; // AssemblerFlags

	enum PreprocessorFlags
	{
		PreprocessorFlagUndefineSystemMacros = 0x01,

	}; // PreprocessorFlags

//////////////////////////////////////////////////////////////////////////

	std::vector< std::filesystem::path > IncludeDirs;
	std::vector< std::string >           Defines;

	std::filesystem::path                InputFile;
	std::filesystem::path                OutputFile;

	Language                             Language          = Language::Unspecified;
	Action                               Action            = Action::All;
	uint32_t                             AssemblerFlags    = 0;
	uint32_t                             PreprocessorFlags = 0;
	uint32_t                             Optimization      = 0; // see Configuration::Optimization
	bool                                 Verbose           = false;

}; // CompileOptions
