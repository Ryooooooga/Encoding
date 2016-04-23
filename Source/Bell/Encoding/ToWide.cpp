//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "ToWide.hpp"
#include "ToUtf8.hpp"
#include <locale>
#include <codecvt>

namespace Bell { namespace Encoding {

	/** UTF-8 => Wide */
	std::wstring toWide(std::string_ref u8)
	{
		std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> conv;
		return conv.from_bytes(u8.begin(), u8.end());
	}

	/** UTF-16 => Wide */
	std::wstring toWide(std::u16string_ref u16)
	{
		return toWide(toUtf8(u16));
	}

	/** UTF-32 => Wide */
	std::wstring toWide(std::u32string_ref u32)
	{
		return toWide(toUtf8(u32));
	}

}}	//	namespace Bell::Encoding
