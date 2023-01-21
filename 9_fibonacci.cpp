// 0 1 1 2 3 5 8 13 21 34 55....... value
// 1 2 3 4 5 6 7 8  9  10 11....... position
#include<iostream>
using namespace std;

// Finding fibonacci
int find_fibo(int n){
    if(n==1) return 0;                   //base case
    if(n==2) return 1;

    int ans = find_fibo(n-1)+find_fibo(n-2); //recursive call
    return ans;
}

int main(){
    int n;
    cout << "Enter No :";
    cin >> n;

    cout << find_fibo(n);
}