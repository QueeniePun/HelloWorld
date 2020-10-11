#include "ConsoleHelper.h"
#include "BaseConverter.h"

using namespace std;

// Run Main Program
int main()
{
   BaseConverter MyBaseConverter;
   int test =  MyBaseConverter.ConvertToBase10("3f7A0E", 16);
   cout << test << endl;

   float a = 2.5;
   int b = 3;
   float c = b / a;
   
   cout << c << endl;
}
