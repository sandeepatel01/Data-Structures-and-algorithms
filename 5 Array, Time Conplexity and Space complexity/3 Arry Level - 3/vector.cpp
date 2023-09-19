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
// vector<vector<int> > arr(5, vector<int>(10,0));

// for(int i=0; i<arr.size(); i++){
//     for(int j=0; j<arr[i].size(); j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// jagged array 
vector< vector<int> > arr;

vector<int> v1(10,0);
vector<int> v2(5,1);
vector<int> v3(7,8);
vector<int> v4(8,1);
vector<int> v5(20,0);

arr.push_back(v1);
arr.push_back(v2);
arr.push_back(v3);
arr.push_back(v4);
arr.push_back(v5);

for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

 return 0;
}