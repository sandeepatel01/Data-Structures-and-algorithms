#include<bits/stdc++.h>
using namespace std;


int findFirstOccurance(int arr[], int n, int target){
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(target == arr[mid]){
            ans = mid;    
            end = mid - 1;
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

int totalOccurance(int arr[], int n, int target){
    int firstOcc = findFirstOccurance(arr, n, target);
    int lastOcc = findLasttOccurance(arr, n, target);

    int total = lastOcc - firstOcc + 1;
    return total;       
}

int main(){
 
 int arr[] = {10,20,30,40,50,60,70,80,90};
 int n=9;
 int target = 30;

 int ans = findLasttOccurance(arr, n, target);
 cout<<"total occurance is: "<<ans<<endl;

 return 0;
}