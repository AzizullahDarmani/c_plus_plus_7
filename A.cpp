#include<iostream>
#include<cmath>
using namespace std;
//	//first method
//int power(int n){
//	if ( n>=0 or n<=30){
//	int a =2; 
//	cout<< pow(a,n);  
//	}
//}
//int main() {
//	int n ; 
//	cin>> n; 
//	power(n); 
//}




//The code uses long long because the function akezhanhochutebya returns a value of type long long. 
//This is because the function computes 2 to the power of n, which can quickly become a very large
//number as n increases. Using long long ensures that the program can handle larger values without overflowing
// or giving incorrect results.
//If the code used a smaller integer type like int, it would eventually overflow when n is sufficiently large. 
//For example, if n is 31, then 2^n would be 2,147,483,648, which is greater than the maximum value 
//of an int (2,147,483,647), causing overflow and undefined behavior. Using long long instead ensures that
// the code can handle larger values of n without running into these issues.


// long long power(long long n) {
//    if(n == 0) 
// 	return 1;
//    return 2*power(n-1);
   
//    //(n-1) means that: 
// 	//    calculatePowerOfTwo(3)
// 	//= 2 * calculatePowerOfTwo(2)
// 	//= 2 * 2 * calculatePowerOfTwo(1)
// 	//= 2 * 2 * 2 * calculatePowerOfTwo(0)
// 	//= 2 * 2 * 2 * 1
// 	//= 8
// }

// int main(){
// int n;
// cin >> n;
// cout << power(n);
// }


long long done(int n){
	if (n==0){
		return 1 ; 
	}else {
		return 2*done(n-1) ; 
	}
}
int main() {
	int n; 
	cin>> n; 
	cout<< done(n) ; 
	return 0; 
}




	//// OTHER METHOD THAN PREVIOUS ONE
// long long power_two(int n ){
// 	long long power = pow(2,n) ; 
// 	return power; 
// }
// int main() {
// 	int n; 
// 	cin>> n; 
// 	cout<< power_two(n) ; 
// 	return 0; 
// }







