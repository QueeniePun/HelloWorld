#include <iostream>
#include <limits> // for cin.ignore() 
#include "ConsoleHelper.h"
using namespace std;

// Overview: Prints input string to console 
// Inputs  : string - user input message
// Outputs : none
void ConsoleHelper::printMessage(string message)
{
    cout << message << endl;
}

// Overview: Prints input string to console for given loop limit  
// Inputs  : string - user input message
//           int    - user input limit
// Outputs : none
void ConsoleHelper::PrintMessages(int x, string message)
{
    for (int i = 0; i < x; i++) {
        printMessage(message);
    }
}


// Overview: Gets user input string
// Inputs  : string - userPrompt 
// Outputs : the user input string
string ConsoleHelper::GetUserString(string userPrompt)
{
    // Local variables for user input
    string inputString;

    // Get user input message and sanitize string
    cout << userPrompt << endl;
    getline(cin, inputString);
    while (inputString.empty())
    {
        cout << "Please input a message length greater than 0." << endl;
        getline(cin, inputString);
    }
    return inputString;

}

// Overview: Gets user input integer 
// Inputs  : string - userPrompt
// Outputs : the user input integer
int ConsoleHelper::GetUserInt(string userPrompt)
{
    //Local variables for user input
    int inputInt;

    // Get user input loop limit integer and sanitize integer
    // Reference: https://www.hackerearth.com/practice/notes/validating-user-input-in-c
    // Reference: https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus
    cout << userPrompt << endl;
    cin >> inputInt;
    while (cin.fail()) 
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a correct input." << endl;
        cin >> inputInt;
    }
    return inputInt;
  
}
