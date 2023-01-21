/*
note: it will not go left or up.***
cR= current row 
cC= current col 
eR= end row 
eC= end col 
*/
#include<iostream>
using namespace std;

//find maze paths
int mazePath(int eR, int eC){
    int rightWays = 0;
    int downWays = 0;
   
    if(eR == 1 && eC) return 1;  //base case
    if(eR == 1){        //can't go down
        rightWays += mazePath(eR,eC-1);
    }
    if(eC == 1){    //can't go right
        downWays += mazePath(eR-1,eC);
    }
    if(eR>1 && eC>1){    // have to go both side
        rightWays += mazePath(eR,eC-1);
        downWays += mazePath(eR-1,eC);
    }
    return rightWays+downWays;
}

int main(){
    int a,b;
    cout << "Enter no. of rows :";
    cin >> a;
    cout << "Enter no. of columns :";
    cin >> b;


    cout << mazePath(a,b);
}