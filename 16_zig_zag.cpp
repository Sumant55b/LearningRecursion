#include<iostream>
using namespace std;

// goes in the form of zig-zag.
void zig_zag(int n){

    if(n==0) return;

    cout<< n << " "; 
    zig_zag(n-1);

    cout << n << " "; 
    zig_zag(n-1);

    cout << n << " "; 
    zig_zag(n-1);
    
    return ;
}

int main(){
    int n;
    cout << "Enter no:";
    cin >> n;
   zig_zag(n);
}