#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(add, subtest_1){
    //Arrange
    int value = 100;
    int increment = 5;

    //Act
    value = value + increment;

    //Assert
    ASSERT_EQ(value, 105);
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
