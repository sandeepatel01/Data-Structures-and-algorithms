#include<bits/stdc++.h>
using namespace std;

void printCounting(int n){
    // Base Case 
    if(n == 1){
    cout<<1<<" ";
    return ;
    }

    // Recursive call 
    cout<<n<<" ";

    printCounting(n-1);
}

void printCountingInIncreasingOrder(int n){
    // Base Case 
    if(n == 1){
    cout<<1<<" ";
    return ;
    }

    // Recursive call(Relation) 
    printCountingInIncreasingOrder(n-1);

    cout<<n<<" ";
}

int main(){
// printCounting(5);
printCountingInIncreasingOrder(5);
 return 0;
}