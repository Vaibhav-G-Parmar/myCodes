////number triangle
////
////print the below
////
////        1
////      2 3 2
////    3 4 5 4 3
////  4 5 6 7 6 5 4
////5 6 7 8 9 8 7 6 5
//
//
//#include <iostream>
//using namespace std;
//
//void main() 
//{	
//	int line;
//	int max;
//
//	cout << "Enter the number of line you want : ";
//	cin >> line;
//	for (int i = 1; i <= line; i++) {
//		for (int j = i; j < line; j++) {
//			cout << "  ";
//		}
//		for (int k = i; k < i*2 ; k++) {
//			cout << k << " ";
//			max = k-1;
//		}
//		for (int k = max; k >= i; k--) {
//			cout << k << " ";
//		}
//		
//		cout << endl;
//	}
//
//	//int n = 1;
//	//cout << "        " << n << endl;		//spaces 8
//
//	//cout << "      ";						//spaces 6
//	//n = 2;
//	//for (int n = 2; n <= 3; n++) {
//	//	cout << n << " ";
//	//}
//	//cout << n << endl;
//	//
//	//cout << "    ";							//spaces 4
//	//for (int n = 3; n <= 5; n++) {
//	//	cout << n << " ";
//	//}
//	//n = 4;
//	//for (; n > 2; n--) {
//	//	cout << n << " ";
//	//}
//	//cout << endl;
//	//
//	//cout << "  ";							//spaces 2
//	//for (int n = 4; n <= 7; n++) {
//	//	cout << n << " ";
//	//}
//	//n = 6;
//	//for (; n > 3; n--) {
//	//	cout << n << " ";
//	//}
//	//cout << endl;
//
//	//cout << "";								//spaces 0
//	//for (int n = 5; n <=9; n++) {
//	//	cout << n << " ";
//	//}
//	//n = 8;
//	//for (; n > 4; n--) {
//	//	cout << n << " ";
//	//}
//	//cout << endl;
//
//}
//
