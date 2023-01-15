#include <iostream>
using namespace std;

int main()
{
   int n;
   long factorial = 1;

   cout << "*** Let's find out the factorial of a given integer ***" << endl << endl;

   cout << "Enter an integer : ";
   cin >> n;
   cout << endl;

   for (int i = 1; i <= n; i++)
   {
      factorial *= i;
   }

   cout << "The " << n << "! = " << factorial << endl;
}