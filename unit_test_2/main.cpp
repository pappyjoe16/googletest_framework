#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class Myclass {
    string id;
public:
    Myclass(string _id) : id(_id) {}
    string GetId() {return id;}
};
TEST(add, increment_by_5){
    //Arrange
    Myclass Myobject("root");

    //Act
    string value = Myobject.GetId();

    //Assert
    ASSERT_STREQ(value.c_str(), "root");
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
