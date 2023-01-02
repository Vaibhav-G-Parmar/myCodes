//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int a[5];
//
//void read(int v[5]);
//void print(int v[5]);
//int findHighest(int v[5], int s);
//void swap(int* v1, int* v2);
//
//int main() {
//	cout << "Finding highest" << endl;
//	read(a);
//	print(a);
//	int index;
//	for (int k = 5; k >= 1; k--) {
//		index = findHighest(a, k);
//		swap(&a[index], &a[k - 1]);
//	}
//	print(a);
//}
//
//void read(int v[5]) {
//	cout << "Reading values from keyboard" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "a[" << i << "] = ";
//		cin >> a[i];
//	}
//}
//
//void print(int v[5]) {
//	cout << "Printing the array" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << a[i] << endl;
//	}
//}
//  
//void swap(int* v1, int* v2) {
//	int temp = *v1;
//	*v1 = *v2;
//	*v2 = temp;
//}
//
//int findHighest(int v[5], int s) {
//	int max = v[0];
//	int index = 0;
//	for (int i = 1;  i < s;  i++)
//	{
//		if (max < v[i]) {
//			max = v[i];
//			index = i;
//		}
//	}
//	return index;
//}