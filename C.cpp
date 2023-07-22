#include <iostream>
using namespace std;

//bool binarySearch(int *arr, int size, int value) {
//    for (int i = 0; i < size; i++) {
//        if (arr[i] == value) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int size;
//    cin >> size;
//    int arr[size];
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//    int value;
//    cin >> value;
//
//    if (binarySearch(arr, size, value)) {
//        cout << "Yes";
//    } else {
//        cout << "No";
//    }
//
//    return 0;
//}







//bool binary_number(int arr[], int size, int number){
//	for(int i=0; i<size; i++){
//		if (arr[i]==number){
//			return  true; 
//		}
//	}
//	return false ; 
//}
//int main() {
//	int size; 
//	cin>> size; 
//	int arr[size]; 
//	for(int i=0; i<size; i++){
//		cin>> arr[i]; 
//	}
//	int number; 
//	cin>> number; 
//	if (binary_number(arr, size, number)){
//		cout<< "yes"; 
//	}else {
//		cout<< "no"; 
//	}
//	return 0; 
//}








// bool binary_number(int *arr, int size, int value){
// 	for(int i=0; i<size; i++){
// 		if (arr[i]==value){
// 			return true; 
// 		}
// 	}
// 	return false; 
// }
// int main() {
// 	int size ; 
// 	cin>> size; 
// 	int arr[size]; 
// 	for(int i=0; i<size; i++){
// 		cin>> arr[i]; 
// 	}
// 	int value ; 
// 	cin>> value ; 
// 	if (binary_number(arr, size, value)){
// 		cout<< "yes"; 
// 	}else {
// 		cout<< "no"; 
// 	}
// 	return 0; 
// }




	// In summary, use void functions when you want to perform an action without requiring a 
	// specific return value, and use functions with data types when you want to manipulate data and return a result.


bool done(int n, int arr[]){
	int sub; 
	cin>> sub; 
	for(int i=0; i<n; i++){
		if (arr[i]==sub){
		return true ; 
	}
	}
	return false; 
}
int main() {
	int n ;
	cin>> n; 
	int arr[n] ; 
	for(int i=0; i<n; i++){
		cin>> arr[i] ; 
	}
	if (done(n,arr)){
		cout<< "the number is in array" ; 
	}else {
		cout<< "the number is not in array" ; 
	}
	return 0; 
}

