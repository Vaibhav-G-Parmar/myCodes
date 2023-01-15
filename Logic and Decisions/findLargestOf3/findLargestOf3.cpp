/*
Program to find the largest number from the given three numbers
findLargestOf3.cpp
Author: Vaibhav Parmar
*/

#include <iostream>
using namespace std;

int main()
{
	int num[3];

	cout << "*** Find out the largets of the given 3 intergers ***" << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter integer " << i+1 << " > ";
		cin >> num[i];
	}
	cout << endl;

	if (num[0] > num[1])
	{
		if (num[0] > num[2])
			cout << "The largest number out of the three is : " << num[0] << endl;
	}
	if (num[1] > num[0])
	{
		if (num[1] > num[2])
			cout << "The largest number out of the three is : " << num[1] << endl;
	}
	if (num[2] > num[1])
	{
		if (num[2] > num[0])
			cout << "The largest number out of the three is : " << num[2] << endl;
	}
}