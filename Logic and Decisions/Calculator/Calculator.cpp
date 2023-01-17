#include <iostream>
using namespace std;

int main()
{
   int choice;
   double n1, n2;
   cout << "*** Welcome to my C++ Calculator! ***" << endl << endl;

   cout << "Please enter two numbers!" << endl << "> ";
   cin >> n1;
   cout << "> ";
   cin >> n2;
   cout << endl;

   cout << "Please choose what would you like to do," << endl
      << "1. Addition" << endl
      << "2. Substraction" << endl
      << "3. Multiplication" << endl
      << "4. Division" << endl
      << "> ";
   cin >> choice;
   cout << endl;

   switch (choice)
   {
   case 1:
      cout << "The addition of " << n1 << " and " << n2 << " is " << n1 + n2 << "." << endl;
      break;
   case 2:
      cout << "The substraction of " << n1 << " and " << n2 << " is " << n1 - n2 << "." << endl;
      break;
   case 3:
      cout << "The multiplication of " << n1 << " and " << n2 << " is " << n1 * n2 << "." << endl;
      break;
   case 4:
      cout << "The division of " << n1 << " and " << n2 << " is " << n1 / n2 << "." << endl;
      break;
   default:
      cout << "Invalid!" << endl;
      break;
   }
}