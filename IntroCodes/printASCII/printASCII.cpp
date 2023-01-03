#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout << "*** Find out the ASCII Value for a Character ***" << endl << endl;

   cout << "Please enter a character!" << endl << "> ";
   cin >> ch;
   cout << endl << "The ASCII Value of character " << ch << " is: " << int(ch) << endl;

   return 0;
}