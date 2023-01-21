#include<iostream>
using namespace std;

//Reversing the array
void reverseString(string  &str,int i, int j){
    //base case
    if(i>j) return ;

    swap(str[i],str[j]);
    i++;
    j--;
    reverseString(str,i,j);
}

int main(){
    string name = "Sumant";

    reverseString(name,0,name.length()-1);

    cout << name;
    return 0;
}