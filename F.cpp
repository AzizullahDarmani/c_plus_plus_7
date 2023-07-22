//#include<iostream>
//#include<cmath>
//using namespace std;
//long long sum_of_digit(string n){
//	long long sum=0; 
//	for(int i=0; i<n.size(); i++){
//		n[i]-=48; 
//		if (n[i]%2==0)
//		//addition of even digits in a string 
//		//sum+=n[i]; 
//		
//		//count of even digits in a string 
//		sum++; 
//	}
//	return sum; 
//}
//int main() {
//	string n; 
//	cin>> n; 
//	cout<< sum_of_digit(n); 
//}



#include <bits/stdc++.h>
using namespace std;

//int Even(string s) // 1234567
//{
//    int cnt = 0; // 3
//    for(int i = 0; i < s.size(); i++)
//    {
//        if(s[i] % 2 == 0)
//        {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//int Even_R(string s, int cnt, int i)
//{
//    if(i == s.size())
//    {
//        return cnt;
//    }
//    if(s[i] % 2 == 0)
//    {
//        cnt++;
//    }
//    return Even_R(s, cnt, i+1);
//}
//int main()
//{
//    string s;
//    cin >> s;
//    // cout << Even(s);
//    cout << Even_R(s, 0, 0);
//
//    return 0;
//}





int count_even(string s ){
    int sum =0 ; 
    int change; 
    for(int i=0; i<s.size(); i++){
        int change = s[i]-'0' ; 
        if (change%2==0)
        sum+= change ; 
    }
    return sum ; 
}
int main() {
    string s ;
    cin>> s; 
    cout<< count_even(s) ; 
    return 0; 
}

