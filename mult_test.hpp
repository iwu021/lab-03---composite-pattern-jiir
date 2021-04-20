#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluationZero){
   Op* op1 = new Op(3);
   Op* op2 = new Op(4);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 12);
}

TEST(MultTest, Zero){
   Op* op1 = new Op(0);
   Op* op2 = new Op(4);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 0);
}

#endif
