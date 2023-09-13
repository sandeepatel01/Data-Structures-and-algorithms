#include<bits/stdc++.h>
using namespace std;

void print(vector<int>V){
    int size = V.size();
    for(int i=0; i<size; i++){
        cout<<V[i]<<" ";
    }
}

int main(){
 
//  vector initialization 
vector<int>arr; // default with no data , 0 size
vector<int>arr2(5, -1);    //init with n size with specific data 

arr2.push_back(60);
print(arr2);

// vector<int>arr3 = {1,2,3,4,5};
vector<int>arr3{1,2,3,4,5};

arr3.pop_back();
print(arr3);


 return 0;
}