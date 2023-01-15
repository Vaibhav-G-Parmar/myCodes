#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "*** Let's display Factors of a number! ***" << endl << endl;

   cout << "Enter an integer : ";
   cin >> n;
   cout << endl;

   cout << "Factors of " << n << " are : ";
   for (int i = 1; i <= n; i++)
   {
      if (n % i == 0)
      {
         cout << i << " ";
      }
   }
   cout << endl;
}