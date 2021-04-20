#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "op.hpp"

TEST(AddTest, AddPos)
{
	Op* first = new Op(3);
	Op* second = new Op(7);
	Add * test = new Add(first, second);
	EXPECT_EQ(test->evaluate(),10);
	EXPECT_EQ(test->stringify(), "(3 + 7)");
}

TEST(AddTest, AddNeg)
{
        Op* first = new Op(-5);
        Op* second = new Op(-10);
        Add * test = new Add(first, second);
        EXPECT_EQ(test->evaluate(),-15);
        EXPECT_EQ(test->stringify(), "(-5 + -10)");
}

TEST(AddTest, AddZero)
{
        Op* first = new Op(0);
        Op* second = new Op(0);
        Add * test = new Add(first, second);
        EXPECT_EQ(test->evaluate(),0);
        EXPECT_EQ(test->stringify(), "(0 + 0)");
}

#endif
