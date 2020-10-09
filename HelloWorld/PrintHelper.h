#pragma once
#include <iostream>
#include <string>

class PrintHelper 
{
private:
    // Members
    std::string inputMessage_;
    int loopLimit_;

    // Methods
    void printMessage(std::string message);
  
public:
    // Methods
    void PrintMessages(int x, std::string message);

    void PrintMessages();

    void GetUserInput();

    // Default Constructor
    PrintHelper()
    {
        inputMessage_ = "";
        loopLimit_ = 0;
    }

    // Destructor
    ~PrintHelper() {}
};
