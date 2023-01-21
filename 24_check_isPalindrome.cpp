#include<iostream>
using namespace std;

//checking is it palindrome
bool isPalindorme(string str, int i){
    //base case
    if(i>str.length()-1-i) return true;        //checking only half of string coz of half part would be same

    if(str[i] != str[(str.length()-1)-i])
        return false;           // if not match then will not be a palindrome
    else
        return isPalindorme(str,i+1);
}
int main(){
    string name = "12321";
    cout << endl;
    bool check = isPalindorme(name,0);
    if(check){
        cout << "This is a palindrome no.";
    }else{
        cout << "This is not a palindrome no.";
    }

    return 0;
}