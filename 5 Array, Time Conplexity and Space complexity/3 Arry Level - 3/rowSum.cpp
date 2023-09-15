// Print  row wise sum 

#include<bits/stdc++.h>
using namespace std;

void printRowWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
           
        }
         cout<<sum<<endl;
    }
}
int main(){
 
 int arr[3][4] = {
    {1,2,3,4},
    {4,5,6,5},
    {7,8,9,6}
 };

 int row = 3; 
 int col = 4;

printRowWiseSum(arr, row, col);

 return 0;
}