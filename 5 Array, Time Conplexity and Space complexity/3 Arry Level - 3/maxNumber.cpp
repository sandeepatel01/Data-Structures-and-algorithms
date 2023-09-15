// Print Maximum number in array 

#include<bits/stdc++.h>
using namespace std;

int printMaxNum(int arr[][4], int row, int col){
    int maxNum = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maxNum){
                maxNum = arr[i][j];
            }
        }
    }
    return maxNum;
}
int main(){
 
  int arr[3][4] = {
    {1,2,3,4},
    {4,5,6,5},
    {7,8,9,6}
 };

int row = 3;
int col = 4; 

cout<<"Print Max Num: "<<printMaxNum(arr, row, col)<<endl;

 return 0;
}