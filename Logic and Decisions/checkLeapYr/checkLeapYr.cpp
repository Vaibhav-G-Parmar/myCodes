/*
Program to Check Leap Year
checkLeapYr.cpp
Author: Vaibhav Parmar
*/

#include <iostream>
using namespace std;

int main()
{
   int year;
   cout << "*** Let's check if the provided year is a Leap Year or not! ***" << endl << endl;

   cout << "Enter a Year" << endl << "> ";
   cin >> year;
   cout << endl;
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
      cout << "The year " << year << " is a Leap Year." << endl;
   else
      cout << "The year " << year << " is NOT a Leap Year." << endl;
}