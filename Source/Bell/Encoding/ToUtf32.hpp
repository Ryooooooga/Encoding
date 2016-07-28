//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include <boost/utility/string_view.hpp>

namespace Bell::Encoding {

	/**
	 * @brief      UTF-8 => UTF32
	 *
	 * @param[in]  u8    UTF-8
	 *
	 * @return     UTF-32
	 */
	std::u32string toUtf32(boost::string_view u8);

	/**
	 * @brief      UTF-16 => UTF32
	 *
	 * @param[in]  u16   UTF-16
	 *
	 * @return     UTF-16
	 */
	std::u32string toUtf32(boost::u16string_view u16);

	/**
	 * @brief      Wide => UTF-32
	 *
	 * @param[in]  wide  Wide Character Set
	 *
	 * @return     UTF-32
	 */
	std::u32string toUtf32(boost::wstring_view wide);

}	//	namespace Bell::Encoding