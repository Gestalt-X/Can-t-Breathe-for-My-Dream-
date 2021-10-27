//
//  simpletest.cpp
//  CPPdemo06_testGtest
//
//  Created by Steven Yu on 2021/10/26.
//
//math_test.cpp
#include <gtest/gtest.h>
#include <math.h>
#import "AddTwoIntegers.cpp"
namespace  {
 TEST(TestingTest, AddVector) {
    
    int i1 = 12;
    int i2 = 5;
    AddTwoIntegers a(i1,i2);
    EXPECT_EQ(a.aPlusB(), i1+i2);
    EXPECT_EQ(a.aMinusB(),i1-i2);
    EXPECT_EQ(a.aMultipliedByB(),i1*i2);
    EXPECT_DOUBLE_EQ(a.aDividedByB(), (double)i1/(double)i2);
    EXPECT_EQ(a.aModB(),i1%i2);
}
}
