#include <iostream>
using namespace std;

int main()
{
   int lcm;
   int num1, num2;

   cout << "*** Let's find out LCM for the given two integer! ***" << endl << endl;

   cout << "Enter the first integer > ";
   cin >> num1;

   cout << "Enter the second integer > ";
   cin >> num2;
 
   cout << endl;

   if (num2 > num1)
   {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }

   for (int i = 1; i <= num1; i++)
   {
      if (num1 % i == 0 && num2 % i == 0)
      {
         lcm = i;
      }
   }

   cout << "The GCD of " << num1 << " and " << num2 << " is : " << lcm << endl;

}
