// Print all tripletes 

#include<bits/stdc++.h>
using namespace std;

void printTripletes(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                 cout << "(" << arr[i] << "," << arr[j]<<","<<arr[k] << ")" << endl;
            }
        }
    }
}
int main(){
 int arr[] = {1,2,3,4};
 int n=4;

printTripletes(arr, n);

 return 0;
}