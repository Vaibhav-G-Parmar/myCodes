#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{               

   
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
