#include<bits/stdc++.h>
using namespace std;

int findMissingElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        int diff = arr[mid] - mid;

        if(diff == 1){
            // right me 
            start = mid+1;
        }
        else{
            // store ans 
            ans = mid;
            // left me jana 
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    if(ans+1 == 0)
    return n+1;
    return ans+1;
}

int main(){
 
//  int arr[] = {1,2,3,4,6,7,8};
int arr[] = {1,2,3,4,5,6,7,8};
 int n = 8;

 int missintNumber = findMissingElement(arr, n);
 cout<<"missing number is: "<<missintNumber<<endl;

 return 0;
}