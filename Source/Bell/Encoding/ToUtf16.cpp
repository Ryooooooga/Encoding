//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "ToUtf16.hpp"
#include "ToUtf8.hpp"
#include <locale>
#include <codecvt>

namespace Bell::Encoding {

	/** UTF-8 => UTF-16 */
	std::u16string toUtf16(boost::string_ref u8)
	{
#ifdef _MSC_VER
		std::wstring_convert<std::codecvt_utf8<__int16>, __int16> conv;
		auto u16 = conv.from_bytes(u8.begin(), u8.end());

		return std::u16string(u16.begin(), u16.end());
#else
		std::wstring_convert<std::codecvt_utf8<char16_t>, char16_t> conv;
		return conv.from_bytes(u8.begin(), u8.end());
#endif	//	_MSC_VER
	}

	/** UTF-32 => UTF-16 */
	std::u16string toUtf16(boost::u32string_ref u32)
	{
		return toUtf16(toUtf8(u32));
	}

	/** Wide => UTF-16 */
	std::u16string toUtf16(boost::wstring_ref wide)
	{
		return toUtf16(toUtf8(wide));
	}

}	//	namespace Bell::Encoding
