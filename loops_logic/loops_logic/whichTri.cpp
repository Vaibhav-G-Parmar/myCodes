//#include <iostream>
//using namespace std;
//
//int main() {
//	int option;
//	
//	cout << "+----------------------------------------+" << endl;
//	cout << "|                                        |" << endl;
//	cout << "|    Hello, Triangle Printer here! :)    |" << endl;
//	cout << "|                                        |" << endl;
//	cout << "+----------------------------------------+" << endl << endl;
//
//	cout << "Please refer to the option below to select a type of triangle." << endl;
//	cout << "Enter 1 for Right Triangle." << endl;
//	cout << "Enter 2 for Equilateral Triangle." << endl << endl;
//	cout << "Enter your option : ";
//	cin >> option;
//	cout << endl;
//
//	if (option == 1) 
//	{
//		cout << "Thank you for choosing the type! " << endl;
//
//		char ch;
//		cout << "Which charater would you like to be printed in a Right Triangle, such as *, Please enter : ";
//		cin >> ch;
//		cout << endl;
//
//		int line;
//		cout << "Lastly, Please enter the numbers of line that you want to print = ";
//		cin >> line;
//		cout << endl;
//		for (int j = 1; j <= line; j++) {
//			for (int i = 0; i < j; i++) {
//				cout << ch;
//			}
//			cout << endl;
//		}
//	}
//	else if (option == 2) 
//	{
//		cout << "Thank you for choosing the type! " << endl;
//
//		char ch; 
//		cout << "Which charater would you like to be printed in an Equilateral Triangle, Please enter : ";
//		cin >> ch;
//		cout << endl;
//
//		int line;
//		cout << "Lastly, Please enter the numbers of line that you want to print = ";
//		cin >> line;
//		cout << endl;
//		
//		for (int i = 1; i <= line; i++) {
//			for (int j = i ; j < line; j++) {
//				cout << " ";
//			}
//			for (int j = 1; j < i * 2; j++) {
//				cout << ch;
//			}
//			cout << endl;
//		}
//	}
//	else 
//	{
//		cout << "Sorry you have not selected correct option! :( Sorry to see you go! Have a good one! :)" << endl;
//	}
//}
