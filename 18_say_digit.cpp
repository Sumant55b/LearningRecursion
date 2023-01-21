#include<iostream>
using namespace std;
//Saying digit
void sayDigit(int n, string arr[]){
    // base case 
    if(n==0) return ;

    //processing
    int digit = n % 10;
    n /= 10;

    sayDigit(n,arr);
    cout << arr[digit] << " ";
}
int main(){
    string value[10] = {"Zero","One","Two","Three",
                        "Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cout << "Enter digit: ";
    cin >> n;

    sayDigit(n,value);
}