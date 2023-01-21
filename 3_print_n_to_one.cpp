#include<iostream>
using namespace std;

// printng number
void printNumber(int n){
    if(n==0) return;
    cout << n << " ";
    printNumber(n-1);
    return ;
}

int main(){
    int n;
    cout << "Enter No:";
    cin >> n;
    printNumber(n);
}