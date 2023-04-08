#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{               
   const int rows = 3;
   const int columns = 3;
   int table[rows][columns];

   for (int rows = 0; rows < 3; rows++)
   {
      for (int columns = 0; columns < 3; columns++)
      {
         int value;
         cout << "Please enter data for R" << rows << "C" << columns << " > ";
         cin >> value;
         table[rows][columns] = value;
      }
      cout << endl;
   }
   
   cout << endl << "Displaying 2D array below" << endl;

   for (int rows = 0; rows < 3; rows++)
   {
      for (int columns = 0; columns < 3; columns++)
      {
         cout /*<< "R" << rows << "C" << columns << " = " */<< table[rows][columns] << " ";
      }
      cout << endl;
   }
 
   return 0;
}
