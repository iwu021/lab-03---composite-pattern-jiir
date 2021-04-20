#ifndef _SUB_TEST_HPP_
#define _SUB_TEST_HPP_
#include "gtest/gtest.h"
#include "sub.hpp"
#include "op.hpp"

TEST(SubTest, SubPos)
{
	Op* first = new Op(5);
	Op* second = new Op(3);
	Sub* test = new Sub(first, second);
	EXPECT_EQ(test->evaluate(), 2); 
	EXPECT_EQ(test->stringify(), "(5.000000 - 3.000000)");
}

Test(SubTest, SubNeg)
{
        Op* first = new Op(-5);
        Op* second = new Op(-3);
        Sub* test = new Sub(first, second);
        EXPECT_EQ(test->evaluate(), -7);
        EXPECT_EQ(test->stringify(), "(-5.000000 -  -3.000000)");
}

Test(SubTest, SubZero)
{
        Op* first = new Op(0);
        Op* second = new Op(0);
        Sub* test = new Sub(first, second);
        EXPECT_EQ(test->evaluate(), 0);
        EXPECT_EQ(test->stringify(), "(0.000000 - 0.000000)");
}
#endif
