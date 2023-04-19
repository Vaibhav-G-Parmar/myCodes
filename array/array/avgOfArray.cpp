/* 
Calculating average of an array - size decided after compilation of the code
avgOfArray.cpp
Author: Vaibhav Parmar
*/

#include <iostream> 
using namespace std;
 
int main() 
{ 
	int numOfIntegers;			//to store the size of Array entered by
	int* a = nullptr;			//the array to store all the integers			
	double avg;
	int total = 0;

	cout << "*** Calculating average of all the integers of an array! ***" << endl << endl; 
 
	cout << "Please enter the number of integers to store in the array : ";
	cin >> numOfIntegers;
	
	a = new int[numOfIntegers];		//Dyanmically allocating the size for the array to store the intergers entered by user

	if (a != nullptr)
	{
		cout << endl << "Please enter integer numbers to store in the array." << endl;
		for (int i = 0; i < numOfIntegers; i++)
		{
			cout << "a[" << i << "] = ";
			cin >> a[i];
		}

		// Find sum of all array elements
		for (int i = 0; i < numOfIntegers; i++)
		{
			total += a[i]; 
		}
		avg = total / numOfIntegers;
		cout << endl;

		cout << "Entered integers are given below: " << endl;
		for (int i = 0; i < numOfIntegers; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl << endl;

		cout << "And the average is = " << avg << endl;
	}
	else
	{
		cout << "Unfortunately! There is not enough size available for this Application to execute." << endl;
	}

	delete[] a;			//deleting the alloated memory
	a = nullptr;			//immediately asigning it to nullptr for future use
}
