//
//  simpletest.cpp
//  CPPdemo06_testGtest
//
//  Created by Steven Yu on 2021/10/26.
//
//math_test.cpp
#include <gtest.h>
#include <math.h>
#import "AddTwoIntegers.cpp"
namespace  {
 TEST(TestingTest, AddVector) {
    double i1 = INTMAX_MAX;
    double i2 = 5;
    AddTwoIntegers a(i1,i2);
    EXPECT_DOUBLE_EQ(a.aPlusB(), i1+i2);
    EXPECT_DOUBLE_EQ(a.aMinusB(),i1-i2);
    EXPECT_DOUBLE_EQ(a.aMultipliedByB(),i1*i2);
    EXPECT_DOUBLE_EQ(a.aDividedByB(), i1/i2);
    EXPECT_DOUBLE_EQ(a.aModB(),(int)i1%(int)i2);
}
}
