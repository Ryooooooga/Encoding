//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <gtest/gtest.h>
#include "../../../Source/Bell/Encoding/ToUtf32.hpp"

TEST(Bell_Encoding_ToUtf32, FromUtf8)
{
	EXPECT_EQ(U"abcABC123あいう", Bell::Encoding::toUtf32(u8"abcABC123あいう"));
}

TEST(Bell_Encoding_ToUtf32, FromUtf16)
{
	EXPECT_EQ(U"abcABC123あいう", Bell::Encoding::toUtf32(u"abcABC123あいう"));
}
