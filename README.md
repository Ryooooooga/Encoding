# Encoding
UTFエンコーディング文字列を変換する関数群

# Examples
```cpp
using namespace Bell::Encoding;

assert(toUtf8 ( u"abcABC123あいう") == u8"abcABC123あいう");
assert(toUtf8 ( U"abcABC123あいう") == u8"abcABC123あいう");
assert(toUtf8 ( L"abcABC123あいう") == u8"abcABC123あいう");

assert(toUtf16(u8"abcABC123あいう") ==  u"abcABC123あいう");
assert(toUtf16( U"abcABC123あいう") ==  u"abcABC123あいう");
assert(toUtf16( L"abcABC123あいう") ==  u"abcABC123あいう");

assert(toUtf32(u8"abcABC123あいう") ==  U"abcABC123あいう");
assert(toUtf32( u"abcABC123あいう") ==  U"abcABC123あいう");
assert(toUtf32( L"abcABC123あいう") ==  U"abcABC123あいう");

assert(toWide (u8"abcABC123あいう") ==  L"abcABC123あいう");
assert(toWide ( u"abcABC123あいう") ==  L"abcABC123あいう");
assert(toWide ( U"abcABC123あいう") ==  L"abcABC123あいう");
```

# License
Encoding is distributed under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).

