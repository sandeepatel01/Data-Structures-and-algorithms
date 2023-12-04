#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    // Base Case 
    if(n == 1)
    return 1;

    if(n == 0)
    return 1;

    // Recursive call(Relation) 
    int recursiveAns = factorial(n-1);

    // Processing 
    int finalAns = n*recursiveAns;
    return finalAns;

}
int main(){
 int ans = factorial(5);
 cout<<ans<<endl;

 return 0;
}