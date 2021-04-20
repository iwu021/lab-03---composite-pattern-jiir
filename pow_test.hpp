#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"
#include <string>
using namespace std;

TEST(PowTest, PowEvaluate_2_pow_2) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(2);
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->evaluate(), 4);
}
TEST(PowTest, PowStringify_2_pow_2) {
	Op* op1 = new Op(2);
	Op* op2 = new Op(2);
	string result = "2 ** 2";
	Pow* test = new Pow(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}


#endif
