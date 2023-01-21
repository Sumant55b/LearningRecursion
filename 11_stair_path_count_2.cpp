// here, only can take 1, 2 and 3 step 
#include<iostream>
using namespace std;

//couting ways 
int stair(int n){
    if(n==1 || n==2) return n; //  base case
    if(n==3 ) return 4;
    int ways = stair(n-1) + stair(n-2) + stair(n-3);
    
    return ways;
}

int main(){
    int n;
    cout << "Enter no:";
    cin >> n;

    cout << stair(n);
    return 0;
}