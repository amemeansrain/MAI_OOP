#include <gtest/gtest.h>
#include "../include/lab1.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(isBalanced(""));
}

TEST(test_02, basic_test_set)
{
    ASSERT_FALSE(isBalanced(")"));
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(isBalanced("()"));
}

TEST(test_04, basic_test_set)
{
    ASSERT_FALSE(isBalanced(")("));
}

TEST(test_05, basic_test_set)
{
    ASSERT_FALSE(isBalanced("((()))("));
}

TEST(test_06, basic_test_set)
{
    ASSERT_TRUE(isBalanced("(())((()())())"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}