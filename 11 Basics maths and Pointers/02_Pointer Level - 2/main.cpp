#include<bits/stdc++.h>
using namespace std;

// void solve(int arr[], int size){
void solve(int* arr, int size){
    cout<<"size of arr in solve function: "<<sizeof(arr)<<endl;
}
int main(){
 
 int arr[] = {10,20,30,40};
 cout<<"size of array in main function: "<<sizeof(arr)<<endl;

 solve(arr, 4);

 return 0;
}