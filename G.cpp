//#include<iostream>
//#include<cmath>
//using namespace std;
//int factorial(int n){
//	if (n==0){
//		return 1; 
//	}
//	while (n>0){
//		return n*factorial(n-1); 
//	}
//}
//int main() {
//	int n ;
//	cin>> n; 
//	cout<< factorial(n); 
//	return 0; 
//}


#include<iostream>
using namespace std;
// int factorial(int n ){
// 	int fact = 1; 
// 	if (n==0){
// 		return 1; 
// 	}
// 	if (n>=1){
// 		return n*factorial(n-1); 
// 	}
// }
// int main() {
// 	int n; 
// 	cin>> n; 
// 	cout<< factorial(n); 
// 	return 0; 
// }






int factorial(int n){
	if (n==0){
		return 1; 
	}else if (n>=1){
		return n*factorial(n-1) ; 
	}
}
int main() {
	int n; 
	cin>> n; 
	cout<< factorial(n) ; 
	return 0; 
}