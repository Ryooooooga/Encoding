//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <gtest/gtest.h>
#include "../../../Source/Bell/Encoding/ToWide.hpp"

TEST(Bell_Encoding_ToWide, FromUtf8)
{
	EXPECT_EQ(L"abcABC123あいう", Bell::Encoding::toWide(u8"abcABC123あいう"));
}

TEST(Bell_Encoding_ToWide, FromUtf16)
{
	EXPECT_EQ(L"abcABC123あいう", Bell::Encoding::toWide(u"abcABC123あいう"));
}

TEST(Bell_Encoding_ToWide, FromUtf32)
{
	EXPECT_EQ(L"abcABC123あいう", Bell::Encoding::toWide(U"abcABC123あいう"));
}
