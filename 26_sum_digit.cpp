#include<iostream>
using namespace std;

//sum of digit
int sumOfDigit(int n){
    //base case
    if(n >=0 && n <= 9) return n;
    int val = n%10;
    n = n /10;
    return val + sumOfDigit(n);

    //only one line
    // return sumOfDigit(n/10) + n%10;
}

int main(){
    int num ;
    cout << "Enter any value : ";
    cin >> num;

    cout << "Sum of digit is " << sumOfDigit(num);
    return 0;
}