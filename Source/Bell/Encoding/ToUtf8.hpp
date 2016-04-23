//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include <Google/string_ref.hpp>

namespace Bell { namespace Encoding {

	/**
	 * @brief      UTF-16 => UTF8
	 *
	 * @param[in]  u16   UTF-16
	 *
	 * @return     UTF-8
	 */
	std::string toUtf8(std::u16string_ref u16);

	/**
	 * @brief      UTF-32 => UTF8
	 *
	 * @param[in]  u32   UTF-32
	 *
	 * @return     UTF-8
	 */
	std::string toUtf8(std::u32string_ref u32);

}}	//	namespace Bell::Encoding

