#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int left = 0;
    int right = n-1;
    while(left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
  
}

int main(){
 
 int arr[] = {10,20,30,40,50,60};
 int n=6;

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

 reverseArray(arr, n);

 for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
 }

 return 0;
}