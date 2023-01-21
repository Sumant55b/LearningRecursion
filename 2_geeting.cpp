#include<iostream>
using namespace std;

// printng Greet
void printNumber(int n){
    if(n==0) return;
    cout << "Good Morning\n";
    printNumber(n-1);
    return ;
}

int main(){
    int n;
    cout << "Enter No:";
    cin >> n;
    printNumber(n);
}