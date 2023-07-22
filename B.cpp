#include<bits/stdc++.h> 
using namespace std;
int binary(int n){
	if (n==0) 
	return 1;
	binary(n/2); 
	cout<< n%2; 
	
	 //The remainder of the division, which is calculated using the expression 
	//n % 2, represents the least significant bit (LSB) of the binary representation 
	//of the number. The LSB is printed to the console using the cout statement
}
int main() {
	int n ;
	cin>> n; 
	binary(n); 
}





    // In the binary number system, each digit position represents a power of 2 starting from the 
    // rightmost position with a value of 1. So, to convert 15 to binary, we need to find the largest 
    // power of 2 that is less than or equal to 15, which is 2^3 = 8. We put a 1 in the 2^3 position, 
    // and subtract 8 from 15 to get 7. Then we repeat the process with 7, finding the largest power 
    // of 2 that is less than or equal to 7, which is 2^2 = 4. We put a 1 in the 2^2 position, and 
    // subtract 4 from 7 to get 3. Then we repeat the process with 3, finding the largest power of 2 
    // that is less than or equal to 3, which is 2^1 = 2. We put a 1 in the 2^1 position, and subtract 
    // 2 from 3 to get 1. Finally, we find the largest power of 2 that is less than or equal to 1, which 
    // is 2^0 = 1. We put a 1 in the 2^0 position, and we have our binary number: 1111.



    // To convert decimal number 8 to binary, we need to find the largest power of 2 that is less than or equal 
    // to 8, which is 2^3 = 8. We put a 1 in the 2^3 position and fill the remaining positions with 0s. Therefore, the binary number of 8 is 1000.
    // In the binary number system, each digit position represents a power of 2 starting from the rightmost 
    // position with a value of 1. So, to convert decimal number 8 to binary, we need to represent the value 8 
    // as a sum of powers of 2. Since the largest power of 2 that is less than or equal to 8 is 2^3 = 8, we put a 
    // 1 in the 2^3 position and fill the remaining positions with 0s to represent the values of 2^2, 2^1, and 2^0 as 0. 
    // Therefore, we get the binary number of 8 as 1000, which has three zeros after the first digit.




// int binary(int n){
//     if (n==0)
//     return 1 ; 
//     binary(n/2) ; 
//     cout<< n%2 ; 
// }
// int main() {
//     int n; 
//     cin>> n; 
//     binary(n) ;  
// }




