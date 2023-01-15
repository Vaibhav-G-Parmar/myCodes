/*
Program to find if a given character is vowel or not
isCharVowel.cpp
Author: Vaibhav Parmar
*/

#include <iostream>
using namespace std;

int main()
{
   char ch;
   bool isOver = true;
   cout << "*** Check out if an entered character is Vowel or Consonant! ***" << endl << endl;

   do
   {
      cout << "Please enter a character" << endl << "Enter 0 to exit" << endl << "> ";
      cin >> ch;
      cout << endl;

      if (ch == '0')
      {
         isOver = false;
      }
      else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
         cout << ch << " is an Vowel character!" << endl << endl;
      }
      else
      {
         cout << ch << " is an Consonant character!" << endl << endl;
      }
   } while (isOver);
   cout << "Thank you hope to see you soon!" << endl;
   return 0;
}