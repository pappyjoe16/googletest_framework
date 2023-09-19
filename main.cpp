#include <iostream>
#include <gtest/gtest.h>

using namespace std;

int add(int a, int b){
    return a + b;
}

TEST(add, positive){
    ASSERT_EQ(12, add(7,5));
}
TEST(add, negative){
    ASSERT_EQ(-13, add(-8, -5));
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
