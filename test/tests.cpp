// Copyright 2024 Kutarin Alexandr
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, SmallValues) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrimeTest, LargeValues) {
  EXPECT_FALSE(checkPrime(1000000000000));
  EXPECT_TRUE(checkPrime(1000000000007));
  EXPECT_FALSE(checkPrime(1000000000008));
}

TEST(NPrimeTest, SmallValues) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
}

TEST(NPrimeTest, LargeValue) {
  EXPECT_EQ(nPrime(100), 541);
  EXPECT_EQ(nPrime(1000), 7919);
  EXPECT_EQ(nPrime(10000), 104729);
}

TEST(NextPrimeTest, SmallValue) {
  EXPECT_EQ(nextPrime(0), 2);
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, LargeValue) {
  EXPECT_EQ(nextPrime(999999999), 1000000007);
  EXPECT_EQ(nextPrime(1000000007), 1000000009);
}

TEST(SumPrimeTest, SmallValue) {
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(50), 328);
}

TEST(SumPrimeTest, LargeValue) {
  EXPECT_EQ(sumPrime(100), 24133);
  EXPECT_EQ(sumPrime(1000), 76127);
}
