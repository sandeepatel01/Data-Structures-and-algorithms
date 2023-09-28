#include<bits/stdc++.h>
using namespace std;

int findLasttOccurance(int arr[], int n, int target){
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(target == arr[mid]){
            ans = mid;    
            start = mid+1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
 
 int arr[] = {10,20,30,30,30,30,30,30};
 int n=8;
 int target = 30;

 int ansIndex = findLasttOccurance(arr, n, target);
 if(ansIndex == -1){
    cout<<"first occurance not found! "<<endl;
 }
 else{
    cout<<"first occurance : "<<ansIndex<<endl;
 }

 return 0;
}