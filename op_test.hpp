#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"
#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(RandTest, OpEvaluateNonZero) {
    rand* test = new rand();
    EXPECT_GE(test->evaluate(), 0);
}

#endif //__OP_TEST_HPP__
