#include <gtest/gtest.h>

#include <calculator/calculator.hpp>

TEST(CalculatorTests, sum_of_5_5_eq_10) {
    Calculator calc;
    ASSERT_EQ(calc.sum(5, 5), 10);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);

    return ::RUN_ALL_TESTS();
}