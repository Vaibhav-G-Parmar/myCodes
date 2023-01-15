#include <iostream>
using namespace std;

//The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

int main()
{
	int n;
	int nextNum;
	int num1 = 0;
	int num2 = 1;

   cout << "*** Display Fibonacci Series ***" << endl << endl;

	cout << "Enter an integer: ";
	cin >> n;
	cout << endl;

	cout << "The fibonacci Series: " << num1 << ", " << num2 << ", ";

	nextNum = num1 + num2;

	while (nextNum <= n)
	{
		cout << nextNum << ", ";
		num1 = num2;
		num2 = nextNum;
		nextNum = num1 + num2;
	}
	cout << endl;
}