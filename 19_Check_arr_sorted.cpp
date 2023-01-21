#include<iostream>
using namespace std;

//checking array is sorted or not.
bool isSorted(int arr[], int size){ // first args can be like.. (int *arr) this.
    //base case
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]){
        return false;
    }else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
    
}
int main(){
    int arr[5] = {1,2,3,4,5};


    if(isSorted(arr,5)){
        cout << "Array is sorted.";
    }else{
        cout << "Array is not sorted.";
    }
}