#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(add, increment_by_5){
    //Arrange
    int value = 100;
    int increment = 5;

    //Act
    value = value + increment;

    //Assert
    ASSERT_EQ(value, 105);
}

TEST(add, increment_by_10){
    //Arrange
    int value = 100;
    int increment = 10;

    //Act
    value = value + increment;

    //Assert
    ASSERT_EQ(value, 110);
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
