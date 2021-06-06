#include "number.h"

#include "gtest/gtest.h"

using namespace math;

TEST(NumberTest, GCD) {
  EXPECT_EQ(gcd(0, 0), 0);
  EXPECT_EQ(gcd(1, 1), 1);
  EXPECT_EQ(gcd(3, 4), 1);
  EXPECT_EQ(gcd(-3, 4), 1);
  EXPECT_EQ(gcd(3, -4), 1);
  EXPECT_EQ(gcd(12, 15), 3);
}