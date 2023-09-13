#include<bits/stdc++.h>
using namespace std;

void print(vector<int>V){
    int size = V.size();
    for(int i=0; i<size; i++){
        cout<<V[i]<<" ";
    }
}
int main(){
 
 vector<int>V;

//  while(1){
//     int d;
//     cin>>d;
//     V.push_back(d);
//     cout<<"Capacity: "<<V.capacity()<<"size: "<<V.size()<<endl;
//  }

//  inserting 
V.push_back(1);
V.push_back(2);
V.push_back(3);
V.push_back(4);
V.push_back(5);
V.push_back(6);

V.pop_back();
V.pop_back();
V.pop_back();


print(V);

 return 0;
}