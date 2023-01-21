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
int mazePath(int cR, int cC, int eR, int eC){
    int rightWays = 0;
    int downWays = 0;
   
    if(cR == eR && cC == eC) return 1;  //base case

    if(cR == eR){  //only rightways call, not downsways
        rightWays += mazePath(cR,cC+1,eR,eC);
    }
    if(cC == eC){  //only downways call, not rightways
        downWays += mazePath(cR+1,cC,eR,eC);
    }
    if(cR < eR && cC < eC){  //will have to call both 
        rightWays += mazePath(cR,cC+1,eR,eC); 
        downWays += mazePath(cR+1,cC,eR,eC); 
    }

    return rightWays+downWays;
}

int main(){
    int a,b;
    cout << "Enter no. of rows :";
    cin >> a;
    cout << "Enter no. of columns :";
    cin >> b;


    cout << mazePath(1,1,a,b);
}