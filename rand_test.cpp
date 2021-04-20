#ifndef __RAND__TEST_HPP__
#define __RAND__TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "rand.hpp"
#include <string>
#include <stdlib.h>

TEST(RandTest, RandEvaluateValThirtyFive){
	srand(1);
	Rand* test = new Rand();
	EXPECT_EQ(test->evaluate(), 35);
}

TEST(RandTest, RandStringValThirtyFive){
    srand(1);
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "35");
}


#endif
