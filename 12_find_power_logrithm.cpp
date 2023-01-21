#include<iostream>
using namespace std;

//finding power with optimal solution
int find_power(int a, int b){
    if(b==0) return 1;                   //base case
    int ans = find_power(a,b/2);          //recursive call
    
    if(b%2==0)                        // if power is even
        return ans*ans;
    else
        return ans*ans*a;             //if power is odd
}

int main(){
    int a,b;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;


    cout << find_power(a,b);
}