//// c++ program to demosntrate all possible
//// substrings of a given string
//#include <iostream>
//using namespace std;
//
//// function to print all sub strings
//void substring(string s, int n)
//{
//    // pick starting point in outer loop
//    // and lengths of different strings for
//    // a given starting point
//    for (int i = 0; i < n; i++) 
//    {
//        for (int len = 1; len <= n - i; len++) 
//        {
//            cout << s.substr(i, len) << endl;
//        }
//    }
//}
//
//// driver program to test above function
//int main()
//{
//    string s;
//    cout << "Enter a string: ";
//    cin >> s;
//    substring(s, s.length());
//    return 0;
//}