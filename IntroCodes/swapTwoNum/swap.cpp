/*
Program to swap two integers numbers
swap.cpp
Author: Vaibhav Parmar
*/

#include <iostream>
using namespace std;

int main()
{
   int num1;
   int num2;

   cout << "*** Swapping Two Integers ***" << endl << endl;

   cout << "Please enter the first integer: " << endl << "> "; 
   cin >> num1;
   cout << endl;
   cout << "Please enter the second integer: " << endl << "> ";
   cin >> num2;

   cout << endl << "* Before Swap *" << endl;
   cout << "Integer 1: " << num1 << endl;
   cout << "Integer 2: " << num2 << endl << endl;

   int temp;
   temp = num1;
   num1 = num2;
   num2 = temp;

   cout << "Integer numbers are swapped!" << endl << endl;

   cout << "* After Swap *" << endl;
   cout << "Integer 1: " << num1 << endl;
   cout << "Integer 2: " << num2 << endl;

   return 0;
}