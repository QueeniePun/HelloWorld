#pragma once
#include <iostream>


class BaseConverter
{
private:
    // Members
    int inputValue_;
    int inputBase_;

    // Methods
   

public:
    // Methods
    int ConvertToBase10(std::string inputValue, int inputBase);
    std::string ConvertToTargetBase(int inputValue, int targetBase);

    // Default Constructor
    BaseConverter()
    {
        inputValue_ = 0;
        inputBase_ = 10;
    }

    // Destructor
    ~BaseConverter() {}
};

