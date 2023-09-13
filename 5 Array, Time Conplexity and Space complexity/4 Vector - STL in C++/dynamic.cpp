// Dynamic memory allocation in arr 

#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"Output arr Elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
 
 int n;
  cout<<"Input number: ";
 cin>>n;

 int *arr = new int[n];
 cout<<"Input Element: ";
 for(int i=0; i<n; i++){
    int data;
    cin>>data;
    arr[i] = data;
 }

 print(arr, n);
 return 0;
}