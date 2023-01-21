#include<iostream>
using namespace std;
//find max value
int maxValue(int arr[], int idx, int size){
    //base case
    if(idx == size-1) return arr[idx];
    //recursion & finding...
    return max(arr[idx],maxValue(arr,idx+1,size));
}
int main(){
    int arr[10] = {2,3,43,23,1,14,4,1,43,1};

    cout << endl << "Max value: " << maxValue(arr,0,10);
    return 0; 
}