////pascal triangle
////
////print the below
////
////     1
////    1 1
////   1 2 1
////  1 3 3 1
//// 1 4 6 4 1
////1 5 10 10 5 1
//
//#include <iostream>
//using namespace std;
//
//void main() 
//{
//	int line = 6;
//
//	for (int i = 1; i <= line; i++)
//	{
//		for (int j = 1; j < line - i + 1; j++)
//		{
//			cout << " ";
//		}
//		int value = 1;
//		for (int k = 1; k <= i; k++)
//		{
//			cout << value << " ";
//			value = value *(i - k) / k;
//		}
//		cout << endl;
//	}
//}