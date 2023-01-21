#include<iostream>
using namespace std;

//sum of all natural no
void sumOfNaturalNO(int n,int sum){
    if(n==0) {                  //base case
        cout << sum;        //code
        return;
    }
    sumOfNaturalNO(n-1,sum+n);       //recursion
    return ;
}

int main(){
    int n;
    cout << "Enter No:";
    cin >> n;
    sumOfNaturalNO(n,0);
}