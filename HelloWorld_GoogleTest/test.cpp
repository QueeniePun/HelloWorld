#include "pch.h"
#include <string>
#include "../HelloWorld/BaseConverter.cpp"


using namespace std; 

TEST(BaseConverterTest, ConvertToBase10_FromBase2) {

// Test Setup
    BaseConverter myBaseConverter;
// Expected Inputs
    string a = "1010";
    string b = "1110";
    string c = "1111";

// Expected Outputs
  EXPECT_EQ(10, myBaseConverter.ConvertToBase10(a, 2));
  EXPECT_EQ(14, myBaseConverter.ConvertToBase10(b, 2));
  EXPECT_EQ(15, myBaseConverter.ConvertToBase10(c, 2));
  EXPECT_TRUE(true);
}