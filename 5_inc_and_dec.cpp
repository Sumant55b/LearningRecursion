//H.W --> DRY RUN FOR 3
#include<iostream>
using namespace std;

//printing on both order(increase_decrease)
void printNumber(int n){
    if(n==0) return;        //base case
    cout << n << " ";       //code
    printNumber(n-1);       //recursion
    cout << n << " ";      //code
    return ;
}

int main(){
    int n;
    cout << "Enter No:";
    cin >> n;
    printNumber(n);
}