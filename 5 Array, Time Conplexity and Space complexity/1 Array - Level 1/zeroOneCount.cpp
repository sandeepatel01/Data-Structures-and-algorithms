#include<bits/stdc++.h>
using namespace std;

void countZeroOne(int arr[], int size){
    int zeroCount = 0;
    int OneCount = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            OneCount++;
        }
    }
    cout<<"Zero count: "<<zeroCount<<endl;
    cout<<"one Count: "<<OneCount<<endl;
}
int main(){
 int arr[] = {0,0,0,1,1,0,0,1,1};
 int size = 9;

 countZeroOne(arr, size);
 return 0;
}