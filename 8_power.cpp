#include<iostream>
using namespace std;

// calcuting Power of something
int find_power(int a,int b){
    if(b==0) return 1;                   //base case
        
    int ans = a*find_power(a,b-1);       //recursion
    return ans;
}

int main(){
    int a,b;
    cout << "Enter value of a :";
    cin >> a;
    cout << "Enter value of b :";
    cin >> b;

    cout << find_power(a,b);
}