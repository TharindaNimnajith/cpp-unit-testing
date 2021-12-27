#include <gtest/gtest.h>

int sideEffect = 24;

bool f1() {
    sideEffect = 16;
    return false;
}

int f2() {
    return 42;
}

TEST(ExampleTests, DemonstrateGTestMacros) {
    EXPECT_EQ(true, true);

    const bool result1 = f1();
    EXPECT_EQ(true, result) << "sideEffect = " << sideEffect;

    const int result2 = f2();
    EXPECT_EQ(16, result) << "Hello, World!";

    EXPECT_TRUE(false);
    ASSERT_TRUE(false);
    EXPECT_TRUE(false);
}

TEST(ExampleTests, MAC) {
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    int expectedNewSum = oldSum + x * y;

    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum)
    );

    EXPECT_EQ(
        expectedNewSum,
        sum
    );
}

TEST(ExampleTests, Square) {
    int x = 5;
    int expectedSquare = x * x;

    EXPECT_EQ(
        expectedSquare,
        Square(x)
    );
}
