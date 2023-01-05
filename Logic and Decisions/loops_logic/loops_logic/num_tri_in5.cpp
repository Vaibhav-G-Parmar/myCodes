/*
Printing below number triangle
num_tri_int5.cpp
Author: Vaibhav Parmar

		  1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include <iostream>
using namespace std;

void main()
{
	int line = 5;
	for (int i = 1; i <= line; i++)					//printing the numbers of lines
	{
		for (int j = i; j < line; j++)				//adding space decreasingly to the each next line
		{
			cout << "  ";
		}
		for (int k = 1; k < i; k++)					//printing left side numbers
		{
			cout << k << " ";
		}
		for (int m = i; m > 0; m--)					//printing right side numbers
		{
			cout << m << " ";
		}
		cout << endl;	
	}
}
