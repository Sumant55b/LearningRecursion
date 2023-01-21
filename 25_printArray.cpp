#include<iostream>
using namespace std;

//printing array
void printArray(int arr[],int idx, int size){
    if(size == idx) return;
    cout << arr[idx] << " ";
    printArray(arr,idx+1,size);
    return ;
}

int main(){
    int arr[5] = {1,4,3,2,4};

    printArray(arr,0,5);
}
