// Print  column wise sum 

#include<bits/stdc++.h>
using namespace std;

void printColWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum += arr[j][i];
           
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

printColWiseSum(arr, row, col);

 return 0;
}