#include <gtest/gtest.h>
#include "../Example.hpp"

TEST(ExampleTests, DemostrateGTestMacros) {
    EXPECT_TRUE(true);
    EXPECT_FALSE(false);
}

TEST(ExampleTests, MAC)
{
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    int expectNewSum = oldSum + x * y;
    EXPECT_EQ(expectNewSum, MAC(x, y, sum));
}

TEST(ExampleTests, Square)
{
    int x = 5;
    int expectedSquare = x * x;
    EXPECT_EQ(expectedSquare, Square(x));
}