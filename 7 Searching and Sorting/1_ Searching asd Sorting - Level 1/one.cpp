#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    // int mid = (start+end)/2;
    int mid = start + (start+end)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        // update Mid 
        // mid = (start+end)/2;
    int mid = start + (start+end)/2;

    }
    return -1;
}

int main(){
 
 int arr[] = {10,20,30,40,45,50,55,60};
 int n = 8;
//  int target = 60;
//  int target = 30;
 int target = 40;


 int ansIndex = binarySearch(arr, n, target);

if(ansIndex == -1){
    cout<<"Element not found! "<<endl;
}
else{
    cout<<"Element Found: "<<ansIndex<<endl;
}

 return 0;
}