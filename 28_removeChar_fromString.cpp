#include<iostream>
using namespace std;
//removing a
string remove_a(string &str, int idx, int size){
    //base case
    if(idx == size) return "";
    string curr = "";
    curr += str[idx];
    // (+) means concatinate 
    return (str[idx] == 'a' ? "" : curr) + remove_a(str,idx+1,size);

}
int main(){
    string str = "Sumant";

    cout << remove_a(str,0,6 );
}