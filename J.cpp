#include<iostream>
#include<cmath>
using namespace std;
//int done(int number){
//	int sum=0; 
//	 while (number!=0){
//		sum = sum+(number%10)/2; 
//		number = number/10; 
//		
//	 }
//	return sum; 
//	}
//
//int main() {
//	int number ;
//	cin>> number;
//	cout<< done(number); 
//	return 0 ; 
//}











	//second method
//#include <bits/stdc++.h>
//using namespace std;
//
//int Heater_Almat(int n) // 8
//{
//    int sum = 0;
//    while(n != 0)
//    {
//        sum += (n %10) / 2; // 0 + 2 + 3 + 4
//        n /= 10;
//    }
//    return sum;
//}
//
//int Heater_Almat(int n, int sum)
//{
//    if(n == 0)
//    {
//        return sum;
//    }
//    sum += (n %10) / 2;
//    return Heater_Almat(n/10, sum);
//}
//int main()
//{
//    int n;
//    cin >> n;
//    // cout << Heater_Almat(n);
//    cout << Heater_Almat(n, 0);
//    return 0;
//}




int digit(string s){
	int sum =0; 
	for(int i=0; i<s.size(); i++){
		s[i]-='0' ; 
		s[i]/=2; 
		sum+=s[i] ; 

	}
	return sum ; 
}
int main() {
	string s ; 
	cin>> s; 
	cout<< digit(s) ; 
	return 0; 
}