#ifndef _DIV_TEST_HPP_
#define _DIV_TEST_HPP_

#include "gtest/gtest.h"
#include "div.hpp"
#include "op.hpp"

TEST(DivTest, DivPos)
{
        Op *first = new Op(10);
        Op *second = new Op(5);
        Div * test = new Div(first,second);
        EXPECT_DOUBLE_EQ(test->evaluate(),2);
}


TEST(DivTest, DivPosString)
{
        Op *first = new Op(10);
        Op *second = new Op(5);
        Div * test = new Div(first,second);
        EXPECT_EQ(test->stringify(), "(10.000000 / 5.000000)");
}


TEST(DivTest, DivNeg)
{
        Op *first = new Op(-2);
        Op *second = new Op(2);
        Div *test = new Div(first,second);
        EXPECT_DOUBLE_EQ(test->evaluate(),-1);
}

TEST(DivTest, DivZero)
{
        Op *first = new Op(0);
        Op *second = new Op(2);
        Div *test = new Div(first,second);
        EXPECT_EQ(test->evaluate(),0);
}
TEST(DivTest, DivZeroString)
{
        Op *first = new Op(0);
        Op *second = new Op(2);
        Div *test = new Div(first,second);
        EXPECT_EQ(test->stringify(), "(0.000000 / 2.000000)");
}

#endif
