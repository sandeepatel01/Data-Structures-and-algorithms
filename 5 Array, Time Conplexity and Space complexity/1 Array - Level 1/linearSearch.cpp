#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[5] = {1,4,6,8,10};
 int n = 5;
 int target = 5;

 bool flag = 0;
//  0 ==> not found 
// 1 ==> found 

 for(int i=0; i<n; i++){
    if(arr[i] == target){
        flag = 1;
        break;
    }
 }
 if(flag == 1){
    cout<<"target found"<<endl;
}else
cout<<"target not found"<<endl;
 return 0;
}