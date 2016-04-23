//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include "ToUtf8.hpp"
#include <locale>
#include <codecvt>

namespace Bell { namespace Encoding {

	/** UTF-16 => UTF-8 */
	std::string toUtf8(std::u16string_ref u16)
	{
#ifdef _MSC_VER
		std::wstring_convert<std::codecvt_utf8<__int16>, __int16> conv;
		return conv.to_bytes(reinterpret_cast<const __int16*>(u16.begin()), reinterpret_cast<const __int16*>(u16.end()));
#else
		std::wstring_convert<std::codecvt_utf8<char16_t>, char16_t> conv;
		return conv.to_bytes(u16.begin(), u16.end());
#endif	//	_MSC_VER
	}

	/** UTF-32 => UTF-8 */
	std::string toUtf8(std::u32string_ref u32)
	{
#ifdef _MSC_VER
		std::wstring_convert<std::codecvt_utf8<__int32>, __int32> conv;
		return conv.to_bytes(reinterpret_cast<const __int32*>(u32.begin()), reinterpret_cast<const __int32*>(u32.end()));
#else
		std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv;
		return conv.to_bytes(u32.begin(), u32.end());
#endif	//	_MSC_VER
	}

}}	//	namespace Bell::Encoding
