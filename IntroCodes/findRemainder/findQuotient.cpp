#include <iostream>
using namespace std;

int main()
{
   int dividend, divisor, quotient, remainder;
   cout << "*** Find out the Quotient and Remainder! ***" << endl << endl; 

   cout << "Please enter a Dividend: ";
   cin >> dividend;
   cout << "Please enter a Divisor: "; 
   cin >> divisor;
   cout << endl; 
 
   quotient = dividend / divisor;
   remainder = dividend % divisor;  
 
   cout << "The Quotient is: " << quotient << endl;
   cout << "The Remainder is: " << remainder << endl << endl << "Thank you!" << endl;
   return 0;
}
 
