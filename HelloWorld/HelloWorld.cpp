#include "ConsoleHelper.h"
#include "BaseConverter.h"

using namespace std;

// Run Main Program
int main()
{
   /* ConsoleHelper MyConsoleHelper;
    string test = MyConsoleHelper.GetUserString("Please type a string.");
    cout << test << endl;
    int testInt = MyConsoleHelper.GetUserInt("Please type an.");
    cout << testInt << endl;*/

    //check if target base is supported, else pls provide base of the supported bases 2-10, 16
    BaseConverter MyBaseConverter;
    /*MyBaseConverter.GetUserInput(); */
   string test =  MyBaseConverter.ConvertBase(250, 16);
   cout << test << endl;
}
