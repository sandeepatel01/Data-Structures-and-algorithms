// Print Transport of a matrix

#include<bits/stdc++.h>
using namespace std;

void print2DArray(int arr[3][3], int row, int col){
     for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
}

void printTransportMatrix(int arr[][], int row, int col){
    
}

int main(){
 
 int arr[3][3] = {
    {2,4,6},
    {8,3,5},
    {7,9,1},
 };

 int row = 3;
 int col = 3;

print2DArray(arr, row, col);


 return 0;
}