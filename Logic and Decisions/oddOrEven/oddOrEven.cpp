/*
Program to find odd or even
oddOrEven.cpp
Author: Vaibhav Parmar
*/

#include <iostream>
using namespace std;

int main()
{
   int num;
   bool isOver = true;
   cout << "*** Check out if an entered number is Odd or Even! ***" << endl << endl;

   do
   {
      cout << "Please enter a number" << endl << "Enter 0 to exit" << endl << "> ";
      cin >> num;
      cout << endl;

      if(num == 0)
      {
         isOver = false;
      }
      else if (num % 2 == 0)
      {
         cout << num << " is an even number!" << endl << endl;
      }
      else
      {
         cout << num << " is an odd number!" << endl << endl;
      }
   } while (isOver);
   cout << "Thank you hope to see you soon!" << endl;
   return 0;
}