/*
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main() 
{
   int n = 1;
   int lines;
   
   cout << "Enter the number of lines you want to get printed : ";
   cin >> lines;
  
   for (int i = 1; i <= lines; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         cout << n << " ";
         n++;
      }
      cout << endl;
   }


}