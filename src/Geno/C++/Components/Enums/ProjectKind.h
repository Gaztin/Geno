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
#include <string_view>

enum class ProjectKind
{
	Unknown,
	Application,
	StaticLibrary,
	DynamicLibrary,

}; // ProjectKind

//////////////////////////////////////////////////////////////////////////

constexpr std::string_view StringifyProjectKind( ProjectKind Kind )
{
	switch( Kind )
	{
		case ProjectKind::Application:    return "Application";
		case ProjectKind::StaticLibrary:  return "StaticLibrary";
		case ProjectKind::DynamicLibrary: return "DynamicLibrary";
		default:                          return "Unknown";
	}

} // StringifyProjectKind

//////////////////////////////////////////////////////////////////////////

constexpr ProjectKind ProjectKindFromString( std::string_view Kind )
{
	/**/ if( Kind == "Application" )    return ProjectKind::Application;
	else if( Kind == "StaticLibrary" )  return ProjectKind::StaticLibrary;
	else if( Kind == "DynamicLibrary" ) return ProjectKind::DynamicLibrary;
	else                                return ProjectKind::Unknown;

} // ProjectKindFromString

//////////////////////////////////////////////////////////////////////////

constexpr std::string_view ProjectKindOutputExtension( ProjectKind Kind )
{
	switch( Kind )
	{
	#if defined( _WIN32 )
		case ProjectKind::Application:    { return ".exe"; } break;
		case ProjectKind::StaticLibrary:  { return ".lib"; } break;
		case ProjectKind::DynamicLibrary: { return ".dll"; } break;
	#else // _WIN32
		case ProjectKind::Application:    { return "";     } break;
		case ProjectKind::StaticLibrary:  { return ".a";   } break;
		case ProjectKind::DynamicLibrary: { return ".so";  } break;
	#endif // _WIN32
		default:                          { return "";     } break;
	}

} // ProjectKindOutputExtension
