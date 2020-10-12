#include "pch.h"
#include "../HelloWorld/BaseConverter.cpp"

using namespace std; 

// Tests input values from 0 to 1000 with target bases 2-10, 16
TEST(BaseConverterTest, ConvertToTargetBases_Test)
{
    // Test Setup
    BaseConverter myBaseConverter;

    // Expected Input: Input Values from 0 to 1000
    //                 Input Target Base from 2 - 10, 16
    for (int targetBase = 2; targetBase < 11; targetBase++) {
        for (int base10Value = 0; base10Value < 1001; base10Value++)
        {
            // Test Target Bases 2-10
            string targetBaseOutput = myBaseConverter.ConvertToTargetBase(base10Value, targetBase);
            int actual = myBaseConverter.ConvertToBase10(targetBaseOutput, targetBase);

            // Expected Output
            EXPECT_EQ(base10Value, actual);
        }
    }

    // Test Target Base 16
    for (int base10Value = 0; base10Value < 1001; base10Value++)
    {
        string targetBaseOutput = myBaseConverter.ConvertToTargetBase(base10Value, 16);
        int actual = myBaseConverter.ConvertToBase10(targetBaseOutput, 16);

        // Expected Output 
        EXPECT_EQ(base10Value, actual);
    }
}


TEST(BaseConverterTest, ConvertToBase10_FromAnyBase)
{
    // Test Setup
    BaseConverter myBaseConverter;

    // Expected Inputs: Values created from ConvertToTargetBase method
    //                  are used as input for the ConvertToBase10 method
    for (int targetBase = 2; targetBase < 11; targetBase++) {
        for (int base10Value = 0; base10Value < 1001; base10Value++)
        {
            // Test input values with Bases 2-10
            // Generates inputs for the ConvertToBase10 method 
            string targetBaseValue = myBaseConverter.ConvertToTargetBase(base10Value, targetBase);

            // Test ConvertToBase10 method 
            int actual = myBaseConverter.ConvertToBase10(targetBaseValue, targetBase);

            // Expected Output
            EXPECT_EQ(base10Value, actual);
        }
    }
    // Test input values with Base 16
    for (int base10Value = 0; base10Value < 1001; base10Value++)
    {
        string targetBaseValue = myBaseConverter.ConvertToTargetBase(base10Value, 16);
        int actual = myBaseConverter.ConvertToBase10(targetBaseValue, 16);

        // Expected Output
        EXPECT_EQ(base10Value, actual);
    }
}
