#include<bits/stdc++.h>
using namespace std;

void print(vector<int>V){
    int size = V.size();
    cout<<"Print Vector "<<endl;
    for(int i=0; i<size; i++){
        // cout<<V[i]<<" ";
        cout<<V.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
 
 vector<int>V;

int n;
cin>>n;

for(int i=0; i<n; i++){
    int data;
    cin>>data;
    V.push_back(data);
}

// for(int i=0; i<10; i++){
//     V.push_back(85);
// }

print(V);

// I want to clear the vector 
V.clear();
V.push_back(55);

print(V);

 return 0;
}