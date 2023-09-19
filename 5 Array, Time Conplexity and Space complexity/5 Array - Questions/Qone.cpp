// modify [-ve in left and +ve number in right] 

#include<bits/stdc++.h>
using namespace std;
int main(){
 
 int arr[] = {-2,8,-6,20,10,-4,-6};
 int n = 7;

     int j=0;
 for(int index=0; index<n; index++){
    if(arr[index]<0){
        swap(arr[index], arr[j]);
        j++;
    }
 }

 for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
 }
 return 0;
}