#include<iostream>
using namespace std;

// goes in the form of pre-in-post.
void pre_in_post(int n){

    if(n==0) return;

    cout << "Pre- " << n << "\n"; 
    pre_in_post(n-1);

    cout << "In- " << n << "\n"; 
    pre_in_post(n-1);

    cout << "Post- " << n << "\n"; 
    pre_in_post(n-1);
    
    return ;
}

int main(){
    int n;
    cout << "Enter no:";
    cin >> n;
   pre_in_post(n);
}