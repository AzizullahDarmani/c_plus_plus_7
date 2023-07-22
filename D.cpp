//#include<bits/stdc++.h>
//using namespace std; 
//long long sum_of_digits(string s){
//	long long sum=0; 
//	for(int i=0; i<s.size(); i++){
//		sum+= s[i]-48; 
//	}
//	return sum; 
//}
//long long sum_of_digits_done(string s, int i, long long sum){
//	if (i==s.size()){
//		return sum; 
//	}
//	sum+= int(s[i])-48; 
//	return sum_of_digits_done(s,i+1, sum); 
//}
//int main() {
//	string s; 
//	cin>> s; 
//	cout<< sum_of_digits_done(s,0,0); 
//	return 0; 
//}




#include<bits/stdc++.h>
using namespace std; 

//long long sum_of_digits(string s, int i=0, long long sum=0){
//	if (i == s.size()){
//	//In the sum_of_digits_done function in the original code, the 
//	//condition i==s.size() is used to check whether the function 
//	//has processed all the digits in the input string. If i has 
//	//reached the size of the string, it means that all the digits 
//	//have been processed, so the function can return the final sum.
//		return sum; 
//	}
//	sum += s[i]-48; 
//	return sum_of_digits(s, i+1, sum); 
//}
//
//int main() {
//	string s; 
//	cin >> s; 
//	cout << sum_of_digits(s); 
//	return 0; 
//}










	///the most simple one
//#include<bits/stdc++.h>
//using namespace std;
//long long sum_of_digits(string s){
//    long long sum = 0;
//    for (int i = 0; i < s.size(); i++) {
//        sum += s[i] - '0';
//    }
//    return sum;
//}
//int main(){
//    string s;
//    cin >> s;
//    cout << sum_of_digits(s);
//    return 0;
//}




long long sum_digit(string s){
	int sum = 0; 
	for(int i=0; i<s.size(); i++){
		sum+= s[i]-'0' ; 
	}
	
	return  sum; 
}
int main() {
	string s ; 
	cin>> s ; 
	cout<<"sum of digits are: "<< sum_digit(s); 
	return 0; 
 }



