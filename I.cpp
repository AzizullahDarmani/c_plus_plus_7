	////recursion method 
#include <bits/stdc++.h>
using namespace std;
//
//void Infinite()
//{
//    long long sum = 0;
//    int x = -1;
//    while(x != 0)
//    {
//        cin >> x;
//        sum += x;
//    }
//    cout << sum;
//}
//long long Infinite_R(int x, long long sum)
//{
//    if(x == 0)
//    {
//        return sum;
//    }
//    sum += x;
//    cin >> x;
//    return Infinite_R(x, sum);
//}
//int main()
//{
//    // Infinite();
//    int x;
//    cin >> x;
//    cout << Infinite_R(x, 0);
//    return 0;
//}






///function method 
//#include <iostream>
//using namespace std;
//
//int sumOfSequence(){
//   int number, sum = 0;
//   cin >> number;
//   while(number != 0){
//      sum += number;
//      cin >> number;
//   }
//   return sum;
//}
//
//int main() {
//   int sum = sumOfSequence();
//   cout << "Sum of the sequence is " << sum;
//   return 0;
//}




//more simpler 
//#include<iostream>
//#include<cmath>
//using namespace std;
//int sum_of_sequence(int number){ 
//	int sum =0;  
//	while (number !=0){
//		sum+= number ;
//		cin>> number; 
//	
//	}
//	return sum; 
//}
//int main() {
//	int number;  
//	cin>> number; 
//	cout<< sum_of_sequence(number); 
//	
//}






// long long sequence_num(int arr[100]){
//     long long sum = 0;
//     for(int i = 0; i < 100; i++){
//         if(arr[i] == 0) {
//             break;
//         }
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int arr[100];
//     for(int i = 0; i < 100; i++){
//         cin >> arr[i];
//         if (arr[i] == 0) {
//             break;
//         }
//     }
//     cout << sequence_num(arr);
//     return 0;
// }




long long done(int n){
	int sum =0; 
	while (n!=0){
		sum+=n; 
		cin>> n ; 
	}
	return sum ; 
}
int main(){
	int n;
	cin>> n; 
	cout<< done(n) ; 
	return 0; 
}


// long long done (int arr[100]){
// 	int sum =0; 
// 	for(int i=0; i<100; i++){
// 		if (arr[i]==0){
// 		break;
// 		}
// 		sum+= arr[i] ; 
// 	}
// 	return sum ; 
// }
// int main() {
// 	int arr[100] ;
// 	for(int i=0; i<100; i++){
// 		cin>> arr[i] ; 
// 		if (arr[i]==0)
// 		break; 
// 	}
// 	cout<< done(arr) ; 
// 	return 0; 
// }


