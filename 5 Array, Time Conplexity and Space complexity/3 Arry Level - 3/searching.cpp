#include<bits/stdc++.h>
using namespace std;

bool searching2DArray(int arr[][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
 
//  Creating 2D array 
 int arr[3][4] = {
    {1,2,3,4},
    {4,5,6,5},
    {7,8,9,6}
 };

int row = 3;
int col = 4;
int target = 80;

cout<<"Found or Not: "<<searching2DArray(arr, row, col, target)<<endl;

 return 0;
}