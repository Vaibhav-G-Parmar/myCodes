//
//#include <iostream>
//using namespace std;
//
//int a[5];
//void read(int v[5]);
//void print(int v[5]);
//void bubblesort(int v[5]);
//void swap(int* v1, int* v2);
//
//int main() {
//	read(a);
//	print(a);
//	bubblesort(a);
//	cout << "sorted output" << endl;
//	print(a);
//}
//
//void read(int v[5]) {
//	cout << "reading values from keyboard" << endl;
//	for (int i = 0; i < 5; i++)
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
//void print(int v[5]) {
//	cout << "printing the array" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << a[i] << endl;
//	}
//}
//
//void bubblesort(int v[5]) {
//	for (int i = 0; i < 5; i++) {
//		for (int j = i+1; j < 5; j++)
//		{
//			if (v[i] > v[j]) {
//				swap(v[i], v[j]);
//			}
//		}
//	}
//}
//
