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
    std::string ConvertBase(int inputValue, int targetBase);

    // Default Constructor
    BaseConverter()
    {
        inputValue_ = 0;
        inputBase_ = 10;
    }

    // Destructor
    ~BaseConverter() {}
};

