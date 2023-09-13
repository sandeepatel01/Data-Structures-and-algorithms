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

//  inserting 
V.push_back(1);
V.push_back(2);
V.push_back(3);
V.push_back(4);
V.push_back(5);
V.push_back(6);

print(V);

 return 0;
}