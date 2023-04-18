/*
C++ Program to find the size of fundamentals types  
findSize.cpp
Author: Vaibhav Parmar 
*/
#define crt_secure_no_warnings
#include <iostream>
using namespace std;

void main()
{
   int choice;
   bool repeat = true;
   cout << "*** Let's find the size of the Fundamental Types in C++ ***" << endl << endl;

   do
   {
      cout << "Which type's size would like to find?" << endl; 
      cout << "1. Char" << endl 
         << "2. Integer" << endl
         << "3. Float" << endl
         << "4. Double" << endl  
         << "Enter 0 to exit." << endl << "> ";
      cin >> choice;
         
      if (choice == 1) 
      {
         cout << endl << "Size of a char: " << sizeof(char) << endl << endl;
      } 
      else if (choice == 2) 
      {
         cout << endl << "Size of a int: " << sizeof(int) << endl << endl;
      }
      else if (choice == 3)
      {
         cout << endl << "Size of a float: " << sizeof(float) << endl << endl;
      }
      else if (choice == 4)
      {
         cout << endl << "Size of a double: " << sizeof(double) << endl << endl;
      }
      else if (choice == 0) 
      {
         cout << endl << "Thank you! We hope you find our information helpful! Hope to see you soon!" << endl << endl;
         repeat = false;
      }
      else 
      {
         cout << endl << "Please enter a valid option! Thank you!" << endl << endl;
      }
   } while (repeat);
}

