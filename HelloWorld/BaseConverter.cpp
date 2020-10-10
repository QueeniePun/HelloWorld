#include "BaseConverter.h"
#include <iostream>
#include <string>

using namespace std;


// Overview: Takes the input value at base 10 and converts it to a target base
//           NOTE: this function only supports conversions of target base 2 through 10, and 16 
// Input   : int - input value
//           int - target base
// Output  : string - new value at target base
string BaseConverter::ConvertBase(int inputValue , int targetBase )
{
    string str = "";
    
   int quotient = inputValue;
   int remainder = 0;

   while (quotient != 0)
   {
       remainder = quotient % targetBase;
       quotient = quotient / targetBase;

       if (targetBase == 16 && remainder > 9)
       {
           if (remainder == 10) {
               str.insert(0, "A");
           }
           else if (remainder == 11) {
               str.insert(0, "B");
           }
           else if (remainder == 12) {
               str.insert(0, "C");
           }
           else if (remainder == 13) {
               str.insert(0, "D");
           }
           else if (remainder == 14) {
               str.insert(0, "E");
           }
           else if (remainder == 15) {
               str.insert(0, "F");
           }
       }
       else
       {
           str.insert(0, to_string(remainder));
           // str = to_string(remainder).append(str);
       }
   }

   return str;
    

}
