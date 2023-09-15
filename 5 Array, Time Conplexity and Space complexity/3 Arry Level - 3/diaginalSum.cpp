#include<bits/stdc++.h>
using namespace std;
void printDiagonal(int arr[][3], int row){
    int sum = 0;
    for(int i=0; i<row; i++){
       sum += arr[i][i];
    }
    cout<<sum<<endl;
}
int main(){
 
  int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
 };

 int row = 3; 
//  int col = 4;

printDiagonal(arr, row);

 return 0;
}