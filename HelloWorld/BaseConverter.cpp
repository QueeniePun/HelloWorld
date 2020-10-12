#include "BaseConverter.h"
#include <iostream>
#include <string>

using namespace std;


// Overview: Takes the input value with corresponding input base and converts it to base 10
//           NOTE: This function only supports conversions of input base 2 through 10, and 16      
// Input   : string - input value
//           int - input base
// Output  : int - of base 10
int BaseConverter::ConvertToBase10(string inputValue, int inputBase)
{
    int sum = 0; 
  
    for (int i = 0; i < inputValue.length(); i++)
    {
        // inputValue is a string, using string::operator[] returns a char
        // Converting char to string in order to use stoi() which converts a string to int
        char indexChar = inputValue[i]; 
        int multiplier = 0;

        // Handles hex values greater than 9
        if (inputBase == 16 && isalpha(indexChar))
        {
            if (indexChar == 'A' || indexChar == 'a')
            {
                multiplier = 10;
            }
            else if (indexChar == 'B' || indexChar == 'b')
            {
                multiplier = 11;
            }
            else if (indexChar == 'C' || indexChar == 'c')
            {
                multiplier = 12;
            }
            else if (indexChar == 'D' || indexChar == 'd')
            {
                multiplier =  13;
            }
            else if (indexChar == 'E' || indexChar == 'e')
            {
                multiplier =  14;
            }
            else if (indexChar == 'F' || indexChar == 'f')
            {
                multiplier = 15;
            }
        }
        // Handles nominal cases 0 to 9
        else
        {
            // Use string constructer to convert char to string 
            // Reference: https://www.techiedelight.com/convert-char-to-string-cpp/
            string indexString(1, indexChar);

            // Use stoi() to convert string to int
            // Reference: http://www.cplusplus.com/reference/string/stoi/
            multiplier = stoi(indexString);
        }

        sum += (pow(inputBase, (inputValue.length() - (i + 1)))) * multiplier;
    }

    return sum;
}


// Overview: Takes the input value of base 10 and converts it to a target base
//           NOTE: this function only supports conversions to target base 2 through 10, and 16       
// Input   : int - input value
//           int - target base
// Output  : string - new value at target base
string BaseConverter::ConvertToTargetBase(int inputValue, int targetBase)
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
