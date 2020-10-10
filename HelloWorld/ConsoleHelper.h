#pragma once
#include <iostream>
#include <string>

class ConsoleHelper 
{
private:
    // Members

    // Methods
    void printMessage(std::string message);
  
public:
    // Methods
    void PrintMessages(int x, std::string message);

    std::string GetUserString(std::string userPrompt);

    int GetUserInt(std::string userPrompt);


    // Default Constructor
    ConsoleHelper() {}

    // Destructor
    ~ConsoleHelper() {}
};
