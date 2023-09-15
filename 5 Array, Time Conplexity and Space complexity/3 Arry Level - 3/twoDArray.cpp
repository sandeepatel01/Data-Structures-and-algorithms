#include<bits/stdc++.h>
using namespace std;

void printTwoDArray(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
 
//  Creating 2D array 
 int arr[3][4] = {
    {1,2,3,4},
    {4,5,6,5},
    {7,8,9,6}
 };

int row = 3;
int col =4;
printTwoDArray(arr, row, col);

 return 0;
}