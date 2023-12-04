#include<bits/stdc++.h>
using namespace std;

int printSum(int n){
    // Base case 
    if(n == 1)
      return 1;

//    Recursive call 
int recursiveAns = printSum(n-1);

// Processing 
int finalAns  = n + recursiveAns;
return finalAns;

}
int main(){
 cout<<printSum(5)<<endl;
 return 0;
}