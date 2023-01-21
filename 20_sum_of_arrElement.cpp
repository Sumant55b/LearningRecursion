#include<iostream>
using namespace std;

// finding sum of element of array
int get_sum(int arr[], int size){
   if(size <= 0) return 0;
   return arr[size-1] + get_sum(arr,size-1);
}
int get_sum(int arr[], int index, int size){
   if(index == size-1) return arr[index];
    return arr[index] + get_sum(arr,index+1, size);
   
}
int main(){
    int arr[5] = {5,2,1,3,4};

    cout << get_sum(arr,5)<< endl;  
    
    cout << get_sum(arr,0,5);    
    

    return 0;
}