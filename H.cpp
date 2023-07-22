#include <iostream>
#include<cmath>
using namespace std; 

//When the input is 1, the function fib(1-1) is called, which is 
//equivalent to fib(0). Since 0<=1, the function immediately returns 
//0, which is the correct value for the 0th Fibonacci number.
//Recall that the Fiboncci sequence starts with 0, 1, and ea subsequent 
//number is the sum of the two preceding numbers. 
//Therefore, the 0th Fibonacci number is defined as 0, and the 
//1st Fibonacci number is defined as 1.
//So, in this implementation, the function fib(n) returns the n-th 
//Fibonacci number, where n starts from 0. That's why when you 
//enter 1, the program returns the 0th Fibonacci number, which is 0

// int fib(int n) {
// 	if (n<=1) 
// 	return n; 
//     else 
//    return   fib(n-1) + fib(n - 2);
	

// }

// int main() {
//    // Get user input for which Fibonacci number to find
//    int n;
//    cin >> n;

//    // Calculate and print the n-th Fibonacci number
//    cout << fib(n-1) << endl;

//    return 0;
// }






int fib(int n){
   if (n<= 1){
      return n ; 
   }else {
      return fib(n-1)+fib(n-2) ; 
   }

}
int main() {
   int n ;
   cin>> n; 
   cout<< fib(n-1) ; 
   return 0; 
}