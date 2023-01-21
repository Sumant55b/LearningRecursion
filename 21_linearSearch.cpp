#include<iostream>
using namespace std;

//Searching element in array
bool linearSarch(int arr[], int size,int key){
   if(size <= 0) return false; // base case

   if(arr[0] == key){           //check first index
    return true;
   }else{                       //check baki index
    bool baki = linearSarch(arr+1, size-1, key);
    return baki;
   }
}
int main(){
    int arr[5] = {5,2,1,3,4};
    int key;
    cout << "Enter the Key: ";
    cin >> key;
    if(linearSarch(arr,5,key)){
        cout << "Present." << "\n";
    }else{
        cout << "Absent." << "\n";
    }

    return 0;
}