#include<gtest/gtest.h>
#include"kuku.h"
using namespace std;
TEST(IsNaturalTest, IsNaturalTestTrue)
{
    EXPECT_TRUE(is_natural((const char*)string("1").c_str()));
    EXPECT_TRUE(is_natural((const char*)string("123").c_str()));
}

TEST(IsNaturalTest, IsNaturalTestFalse)
{
    EXPECT_FALSE(is_natural((const char*)string("1.3").c_str()));
    EXPECT_FALSE(is_natural((const char*)string("-1").c_str()));
    EXPECT_FALSE(is_natural((const char*)string("abc").c_str()));
    
}

int main(int argc, char *argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
