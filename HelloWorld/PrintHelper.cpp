#include <iostream>
#include <limits> // for cin.ignore() 
#include "PrintHelper.h"
using namespace std;

// Overview: Prints input string to console 
// Inputs  : string - user input message
// Outputs : none
void PrintHelper::printMessage(string message)
{
    cout << message << endl;
}

// Overview: Prints input string to console for given loop limit  
// Inputs  : string - user input message
//           int    - user input limit
// Outputs : none
void PrintHelper::PrintMessages(int x, string message)
{
    for (int i = 0; i < x; i++) {
        printMessage(message);
    }
}

// Overview: Prints class message string to console up to the class loop limit
// Inputs  : none
// Outputs : none
void PrintHelper::PrintMessages()
{
    for (int i = 0; i < loopLimit_; i++) {
        printMessage(inputMessage_);
    }
}

// Overview: Gets user input message and loop limit 
// Inputs  : none
// Outputs : none
void PrintHelper::GetUserInput() 
{
    // Local variables for user input
    string userInputMessage;
    int userInputLoopLimit;
   
    // Get user input message and sanitize string
    cout << "What is your message?" << endl; 
    getline(cin, userInputMessage);
    while (userInputMessage.empty())
    {
        cout << "Please input a message length greater than 0." << endl;
        getline(cin, userInputMessage);
    }
    inputMessage_ = userInputMessage; 

    // Get user input loop limit integer and sanitize integer
    // Reference: https://www.hackerearth.com/practice/notes/validating-user-input-in-c
    // Reference: https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus
    cout << "How many times would you like to print the message?" << endl;
    cin >> userInputLoopLimit;
    while (cin.fail()) 
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a correct input." << endl;
        cin >> userInputLoopLimit;
    }
    loopLimit_ = userInputLoopLimit;
  
}
