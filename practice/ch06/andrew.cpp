#include <gtest/gtest.h>
#include <string>
#include <iostream>
using namespace std;

bool isPrime(int N) {
    for (int i = 2; i < N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

TEST(isPrimeName,isPrime) {
    EXPECT_FALSE(isPrime(4));
    EXPECT_TRUE(isPrime(5));
    EXPECT_FALSE(isPrime(6));
}