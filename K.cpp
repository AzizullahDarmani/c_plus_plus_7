#include<iostream>
using namespace std;
//int done(string number){
//	int max = -1e9; 
//	for(int i=0; i<number.size(); i++){
//		number[i]-=48; 
//		if (number[i]>max)
//		max = number[i]; 
//	}
//	return max; 
//}
//int main() {
//	string number; 
//	cin>> number;
//	cout<< done(number)<< endl; 
//	return 0; 
//}










////recursion method
//#include <bits/stdc++.h>
//using namespace std;
//
//int Max_Digit(string s)
//{
//    int MAX = -1e9; 
//    for(int i = 0; i < s.size(); i++)
//    {
//        s[i] = int(s[i])-48;
//        if(s[i] > MAX)
//        {
//            MAX = s[i];
//        }
//    }
//    return MAX;
//}
//
//int Max_Digit_R(string s, int i, int MAX)
//{
//    if(i == s.size())
//    {
//        return MAX;
//    }
//    s[i] = int(s[i])-48;
//    if(s[i] > MAX)
//    {
//        MAX = s[i];
//    }
//    return Max_Digit_R(s, i+1, MAX);
//}
//int main()
//{
//    string s;
//    cin >> s;
//    // cout << Max_Digit(s);
//    cout << Max_Digit_R(s, 0, -1e9);
//
//    return 0;
//}




void maximum(string s){
    int max = -1e9; 
    for(int i=0; i<s.size(); i++){
        s[i]-='0' ; 
        if (s[i]>max) 
        max = s[i] ; 
    }
    cout<< max ; 
}
int main() {
    string s; 
    cin>> s; 
    maximum(s) ; 
    return 0; 
}