// Print minimum number in array 

#include<bits/stdc++.h>
using namespace std;

int printMinNum(int arr[][4], int row, int col){
    int minNum = INT_MAX;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] < minNum){
                minNum = arr[i][j];
            }
        }
    }
    return minNum;
}
int main(){
 
  int arr[3][4] = {
    {1,2,3,4},
    {4,5,6,5},
    {7,8,9,6}
 };

int row = 3;
int col = 4; 

cout<<"Print Max Num: "<<printMinNum(arr, row, col)<<endl;

 return 0;
}