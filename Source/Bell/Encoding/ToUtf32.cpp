//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "ToUtf32.hpp"
#include "ToUtf8.hpp"
#include <locale>
#include <codecvt>

namespace Bell::Encoding {

	/** UTF-8 => UTF-32 */
	std::u32string toUtf32(boost::string_ref u8)
	{
#ifdef _MSC_VER
		std::wstring_convert<std::codecvt_utf8<__int32>, __int32> conv;
		auto u32 = conv.from_bytes(u8.begin(), u8.end());

		return std::u32string(u32.begin(), u32.end());
#else
		std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv;
		return conv.from_bytes(u8.begin(), u8.end());
#endif	//	_MSC_VER
	}

	/** UTF-16 => UTF-32 */
	std::u32string toUtf32(boost::u16string_ref u16)
	{
		return toUtf32(toUtf8(u16));
	}

	/** Wide => UTF-32 */
	std::u32string toUtf32(boost::wstring_ref wide)
	{
		return toUtf32(toUtf8(wide));
	}

}	//	namespace Bell::Encoding
