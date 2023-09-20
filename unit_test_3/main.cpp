#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class Myclass {
    int basevalue;
public:
    Myclass(int _bv) : basevalue(_bv) {}
    void Increament(int byValue){
        basevalue += byValue;
    }
    int getValue(){
        return basevalue;
    }
};

//Fixture for class test. With this no need of having Arrange under test_f
struct MyclassTest : public testing::Test {
    Myclass *Myobject;
    void SetUp() {Myobject = new Myclass(100); }
    void TearDown() { delete Myobject; }
};

TEST_F(MyclassTest, Increment_by_5){
    //Act
    Myobject->Increament(5);
    
    //Assert
    ASSERT_EQ(Myobject->getValue(), 105);
}

TEST_F(MyclassTest, Increment_by_10){
    //Act
    Myobject->Increament(10);
    
    //Assert
    ASSERT_EQ(Myobject->getValue(), 110);
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
