#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class Myclass {
    int basevalue;
public:
    Myclass(int _bv) : basevalue(_bv) {}
    void Increament(int byValue){
        basevalue = basevalue + byValue;
    }
    int getValue(){
        return basevalue;
    }
};
TEST(ClassTest, increment_by_5){
    //Arrange
    Myclass Myobject(102);

    //Act
    Myobject.Increament(5);
    
    //Assert
    ASSERT_EQ(Myobject.getValue(), 107);
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
