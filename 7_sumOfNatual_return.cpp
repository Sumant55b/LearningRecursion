#include<iostream>
using namespace std;

//sum of all natural no
int sumOfNaturalNO(int n){
    if(n==0 || n==1) return n;                   //base case
        
    int ans = n+sumOfNaturalNO(n-1);       //recursion
    return ans;
}

int main(){
    int n;
    cout << "Enter No:";
    cin >> n;
    cout << sumOfNaturalNO(n);
}