//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <gtest/gtest.h>
#include "../../../Source/Bell/Encoding/ToUtf8.hpp"

TEST(Bell_Encoding_ToUtf8, FromUtf16)
{
	EXPECT_EQ(u8"abcABC123あいう", Bell::Encoding::toUtf8(u"abcABC123あいう"));
}

TEST(Bell_Encoding_ToUtf8, FromUtf32)
{
	EXPECT_EQ(u8"abcABC123あいう", Bell::Encoding::toUtf8(U"abcABC123あいう"));
}

TEST(Bell_Encoding_ToUtf8, FromWide)
{
	EXPECT_EQ(u8"abcABC123あいう", Bell::Encoding::toUtf8(L"abcABC123あいう"));
}
