#include <iostream>
using namespace std;

int main()
{
   int n;
   int range;
   cout << "*** Let's generate multiplication table for a given integer ***" << endl << endl;

   cout << "Enter an integer : ";
   cin >> n;
   cout << endl;
   cout << "Enter a range: ";
   cin >> range;
   cout << endl;

   for (int i = 1; i <= range; i++)
   {
      cout << n << " * " << i << " = " << n * i << endl;
   }
}