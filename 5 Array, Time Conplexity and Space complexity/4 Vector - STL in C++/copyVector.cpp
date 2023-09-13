#include<bits/stdc++.h>
using namespace std;

void print(vector<int>V){
    int size = V.size();
    for(int i=0; i<size; i++){
        cout<<V[i]<<" ";
    }
}

int main(){
 
//  vector copy

vector<int> arr5 = {1,2,3,4,5};

vector<int> arr6(arr5);
print(arr6);



 return 0;
}