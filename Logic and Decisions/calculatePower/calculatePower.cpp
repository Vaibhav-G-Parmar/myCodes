#include <iostream>
using namespace std;

int main()
{
   int base;
   int power = 1;
   int exponent;

   cout << "*** Let's calculate Power of a Number! ***" << endl << endl;

   cout << "Enter the base: ";
   cin >> base;
   cout << "Enter the exponent: ";
   cin >> exponent;
   cout << endl;
   cout << base << "^" << exponent << " = ";
    
   while (exponent != 0)
   {
      power *= base;
      exponent--;
   }

   cout << power << endl;
}