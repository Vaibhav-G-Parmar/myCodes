#include <iostream>
using namespace std;

int main()
{
   int hcf;
   int num1, num2;

   cout << "*** Let's find out HCF for the given two integer! ***" << endl << endl;
   
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

   for (int i = 1; i <= num2; i++)
   {
      if (num1 % i == 0 && num2 % i == 0)
      {
         hcf = i;
      }
   }

   cout << "The GCD of " << num1 << " and " << num2 << " is : " << hcf << endl;
  
}