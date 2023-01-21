// here, only can take 1 or 2 step 
#include<iostream>
using namespace std;

//couting ways 
int stair(int n){
//  if(n==1 || n==2) return n; // i will also a base case
    if(n==1) return 1;           //these are base case
    if(n==2) return 2;

    int ways = stair(n-1) + stair(n-2);
    
    return ways;
}

int main(){
    int n;
    cout << "Enter no:";
    cin >> n;

    cout << stair(n);
    return 0;
}