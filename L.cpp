#include <iostream>
#include <string>

using namespace std;

//bool isPalindrome(string str) {
//
//    for (int i = 0; i < str.size() / 2; i++) {
//        if (str[i] != str[str.size() - i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    string str;
//
//    cout << "Enter a string: ";
//    getline(cin, str);
//
//    if (isPalindrome(str)) {
//        cout << str << " is a palindrome" << endl;
//    } else {
//        cout << str << " is not a palindrome" << endl;
//    }
//
//    return 0;
//}






bool is_palindrome(string s){
    int size = s.size() ; 
    for(int i=0; i<s.size()/2; i++){
        if (s[i]!=s[size-i-1]){
            return false ; 
        }
    }
    return true; 
}
int main() {
    string s; 
    cin>> s; 
    if (is_palindrome(s)){
        cout<< "string is palindrome" ; 
    }else {
        cout<< "string is not palindrome" ; 
    }
    return 0; 
}