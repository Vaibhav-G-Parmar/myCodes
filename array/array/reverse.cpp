//#include <iostream>
//
//using namespace std;
//
//int a[9];
//void read(int v[9]);
//void print(int v[9]);
//void swap(int* v1, int* v2);
//void reverse(int v[9], int s);
//
//int main() {
//	cout << "Reversing an array" << endl;
//	read(a);
//	print(a);
//	reverse(a, 9);
//	print(a);
//}
//
//void read(int v[9]) {
//	cout << "Reading values from the keyboard" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << "a[" << i << "] = ";
//		cin >> a[i];
//	}
//}
//
//void swap(int* v1, int* v2) {
//	int temp = *v1;
//	*v1 = *v2;
//	*v2 = temp;
//}
//
//void print(int v[9]) {
//	cout << "Printing the array" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << a[i] << endl;
//	}
//}
//
//void reverse(int v[9], int s) {
//	int j = s - 1;
//	for (int i = 0; i < j; i++, j--)
//	{
//		swap(&a[i], &a[j]);
//	}
//}
