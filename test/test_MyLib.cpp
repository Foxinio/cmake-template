#include <gtest/gtest.h>
#include <MyLib/MyLib.hpp>

TEST(MyLib, HelloReturnsExpected) {
    EXPECT_EQ(MyLib::hello(), "Hello World!");
}
