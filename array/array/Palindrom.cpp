//#include <iostream>
//using namespace std;
//
//int main() {
//	char s[20];
//	cout << "enter a string : ";
//	cin >> s;
//	cout << endl;
//	
//	cout << "the entered string is : " << s << "." << endl << endl;
//	int length = strlen(s);
//	cout << "the length of the string is : " << length << "." << endl << endl;
//	
//	int flag = 0;
//	for (int i = 0; i < length; i++)
//	{
//		if (s[i] != s[length - i - 1]) {
//			flag = 1;
//			break;
//		}
//	}
//
//	if (flag) {
//		cout << "the given string is not a palindrom." << endl;
//	}
//	else{
//		cout << "the given string is a palindrom." << endl;
//	}
//
//}