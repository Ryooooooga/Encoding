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
	 * @brief      UTF-16 => UTF8
	 *
	 * @param[in]  u16   UTF-16
	 *
	 * @return     UTF-8
	 */
	std::string toUtf8(boost::u16string_view u16);

	/**
	 * @brief      UTF-32 => UTF8
	 *
	 * @param[in]  u32   UTF-32
	 *
	 * @return     UTF-8
	 */
	std::string toUtf8(boost::u32string_view u32);

	/**
	 * @brief      Wide => UTF-8
	 *
	 * @param[in]  wide  Wide Character Set
	 *
	 * @return     UTF-8
	 */
	std::string toUtf8(boost::wstring_view wide);

}	//	namespace Bell::Encoding
