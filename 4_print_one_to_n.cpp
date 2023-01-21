#include<iostream>
using namespace std;

// printng number - 1st method
/*
void printNumber(int x, int n){ // will use extra parameter.
    if(x>n) return;             //base case
    cout << x << " ";           //code
    printNumber(x+1,n);         //recursion
    return ;
}
*/
// 2nd method 
void printNumber(int n){ 
    if(n==0) return;         //base case
    printNumber(n-1);       //recursion
    cout << n << " ";       //code

    return ;
}
int main(){
    int n;
    cout << "Enter No:";
    cin >> n;
    // printNumber(1,n);    //call for 1st method
    printNumber(n);           //call for 2nd method
}