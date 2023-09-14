// Left shift array elements by 1 

#include<bits/stdc++.h>
using namespace std;

void leftShiftArr(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i>=n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
int main(){
 
 int arr[] = {10,20,30,40,50,60};
 int n = 6;

 leftShiftArr(arr, n);

 for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
 }

 return 0;
}