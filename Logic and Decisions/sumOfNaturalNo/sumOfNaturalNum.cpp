/*
Program to Calculate Sum of Natural Numbers
sumOfNaturalNum.cpp
Author: Vaibhav Parmar
*/

#include <iostream>
using namespace std;

int main() 
{
   int n;
   int sum = 0;
   cout << "*** Calculate Sum of Natural Numbers ***" << endl << endl;

   cout << "Enter a Positve Integer: ";
   cin >> n;

   for (int i = 1; i <= n; i++)
   {
      sum += i;
   }

   cout << "The sum is : " << sum << endl;
     
}