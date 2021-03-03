/********************************************************************
 * Author: Austin Nelson
 *
 * Project: This is an interview question I heard about a researched a bit
 * Details: https://wiki.c2.com/?FizzBuzzTest
 * Solution: I got the idea from this solution from Tom Scott
 ********************************************************************/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


void print()
{
   for (int i = 1; i <= 100; ++i)
   {
      string output = "";
      if (i % 3 == 0)
      {
         output += "fizz";
      }
      if (i % 5 == 0)
      {
         output += "buzz";
      }

      if (output == "")
      {
         cout << i << endl;
      }
      else
      {
         cout << output << endl;
      }
   }
}


/********************************************************************
 * MAIN
 * for simplicity I want to do the first values to set in main for now
 ********************************************************************/
int main()
{
   print();
   return 0;
}
