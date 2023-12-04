// PS - find 2^n 

#include<bits/stdc++.h>
using namespace std;

int power(int n){
    // Base Case 
    if(n == 0)
    return 1;

    // Recursive call(Relation) 
    int recursiveAns = 2;

    // Processing 
    int finalAns = recursiveAns*power(n-1);
    return finalAns;

}
int main(){
 cout<<power(4)<<endl;
 return 0;
}