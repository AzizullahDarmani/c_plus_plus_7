////first method without using function

//#include <iostream>
//using namespace std;
//
//int main() {
//    long long n;
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "No" << endl;
//        return 0;
//    }
//
//    while (n % 2 == 0) {
//        n /= 2;
//    }
//
//    if (n == 1) {
		
	// if n==1, means that: 32/2=16/2=8/2=4/2=2/2=  1 
	
//        cout << "Yes" << endl;
//    } else {
//        cout << "No" << endl;
//    }
//
//    return 0;
//}





	////function method
#include <iostream>
using namespace std;
//
//bool isPowerOfTwo(long long n) {
//    if (n <= 0) {
//        return false;
//    }
//    while (n % 2 == 0) {
//        n /= 2;
//    }
//    return (n == 1);
//    //The condition n==1 is used in the power() function to check if 
//	//the input number n is a power of 2. This is because if n is a 
//	//power of 2, then after dividing it by 2 repeatedly until it 
//	//becomes 1, the function returns true.
//}
//
//int main() {
//    long long n;
//    cin >> n;
//
//    if (isPowerOfTwo(n)) {
//        cout << "Yes" << endl;
//    } else {
//        cout << "No" << endl;
//    }
//
//    return 0;
//}






//#include<iostream>
//using namespace std; 
//bool is_power_two(long long n){
//	if (n<=0){
//		return false; 
//	}
//	while (n%2==0){
//	n /= 2; 
//}
//if (n==1){
//	return true; 
//}else {
//	return false ; 
//	}
//}
//int main() {
//	long long n; 
//	cin>> n; 
//	if (is_power_two(n)){
//		cout<< "yes" ; 
//	}else {
//		cout<< "no"; 
//	}
//	return 0; 
//}




bool is_power(int n){
	if (n<=0){
		return false; 
	}
	while (n%2==0){
		n/=2; 
	}
	if (n==1){
		return true ; 
	}else {
		return false; 
	}
}
int main() {
	int n; 
	cin>> n; 
	if (is_power(n)){
		cout<< "yes" ; 
	}else {
		cout<< "no" ; 
	}
	return 0; 
}











