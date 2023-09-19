// Vector in 2D array 

#include<bits/stdc++.h>
using namespace std;
int main(){

// vector<int>v(5, 111);

// cout<<"size of vector: "<<v.size()<<endl;

// cout<<"printing the vector: "<<endl;
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }

// 2D Array 
vector<vector<int> > arr(5, vector<int>(10,0));

for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

 return 0;
}