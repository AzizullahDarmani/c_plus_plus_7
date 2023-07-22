//Sure, I'll be happy to explain how the program determines whether the player is a 
//cheater or not based on the input array and the value of k.
//The function Cheater takes three arguments, an array a of size n, and an integer k. 
//The function first checks if the first element of the sorted array is less than 
//or equal to k. If it is, then it increments the cnt variable. This check is done because 
//if the first element is less than or equal to k, the player can simply select that number 
//and then select any number less than or equal to k in the remaining rounds to win the game.

//Then, the function loops through the remaining elements of the sorted array 
//and checks if the difference between the current element and the previous element is 
//less than or equal to k. If it is, then it increments the cnt variable. This check is 
//done because if the difference between any two adjacent elements is less than or equal 
//to k, the player can select one of those two elements and then select any number 
//less than or equal to k in the remaining rounds to win the game.


// recursion method 
//#include <bits/stdc++.h>
//using namespace std;
//
//bool Cheater(int *a, int n, int k)
//{
//    int cnt = 0;
//    if(a[0] <= k)
//    {
//        cnt++;
//    }
//    for(int i = 1; i < n; i++)
//    {
//        if(a[i] - a[i-1] <= k)
//        {
//            cnt++;
//        }
//    }
//    if(cnt >=2)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//bool Cheater_R(int *a, int n, int k, int i, int cnt)
//{
//    if(i == n)
//    {
//        if(cnt >= 2)
//        {
//            return true;
//        }
//        else return false;
//    }
//    if(a[i] - a[i-1] <= k)
//    {
//        cnt++;
//    }    
//    return Cheater_R(a, n, k, i+1, cnt);
//}
//int main()
//{
//    int n,k; cin >> n >> k;
//    int a[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a, a+n);
//    //  cout << (Cheater(a, n, k) ? "cheater" : "no");
//    int cnt = 0;
//    if(a[0] <= k)
//    {
//        cnt++;
//    }
//    cout << (Cheater_R(a, n, k, 1, cnt) ? "cheater" : "no");
//    return 0;
//}



///function method
//#include <bits/stdc++.h>
//using namespace std;
//
//bool Cheater(int *a, int n, int k)
	
	//The function Cheater takes an integer pointer a as input instead 
	//of an array. However, arrays in C++ are represented as pointers to their 
	//first element, so int *a can be used to access the elements of the array a
//{
//    int cnt = 0;
//    if(a[0] <= k)
//    {
//        cnt++;
//    }
//    for(int i = 1; i < n; i++)
//    {
//        if(a[i] - a[i-1] <= k)
//        {
//            cnt++;
//        }
//    }
//    if(cnt >=2)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//int main()
//{
//    int n,k; cin >> n >> k;
//    int a[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a, a+n);
//    cout << (Cheater(a, n, k) ? "cheater" : "no");
//    return 0;
//}






#include<bits/stdc++.h>
using namespace std;
bool cheater(int *arr, int n , int k){
	int cnt = 0; 
	if (arr[0]<=k){
		cnt++; 
	}
	for(int i=1; i<n; i++){
		if (arr[i]-arr[i-1]<=k){
		cnt++; 
	}
}
if (cnt>=2){
	return true; 
}else {
	return false ; 
		}
}
int main() {
	int n , k; 
	cin>> n >> k; 
	int arr[n]; 
	for(int i=0; i<n ; i++){
		cin>> arr[i]; 
	}
	sort(arr, arr+n); 
	cout<< (cheater(arr,n,k)? "cheater":"no"); 
	return 0; 
}





//#include <bits/stdc++.h>
//using namespace std;
//
//bool Cheater(int a[], int n, int k)
//{
//    int cnt = 0;
//    if(a[0] <= k)
//    {
//        cnt++;
//    }
//    for(int i = 1; i < n; i++)
//    {
//        if(a[i] - a[i-1] <= k)
//        //The if condition if(a[i] - a[i-1] <= k) is checking if the difference 
//		//between the current element a[i] and the previous element a[i-1] is less than or equal to k.
//        {
//            cnt++;
//        }
//    }
//    if(cnt >=2)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//int main()
//{
//    int n,k; cin >> n >> k;
//    int a[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a, a+n);
//    //In this case, a is the starting address of the array, and a+n is the ending 
//	//address of the array. The value of n represents the number of elements in the array. 
//	//Therefore, a+n points to the address one past the last element of the array
//    cout << (Cheater(a, n, k) ? "cheater" : "no");
//    return 0;
//}


