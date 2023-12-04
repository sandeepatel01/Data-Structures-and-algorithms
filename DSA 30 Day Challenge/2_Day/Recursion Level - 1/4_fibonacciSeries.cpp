// PS - find the nth term(sum) in fibonacci series 

#include<bits/stdc++.h>
using namespace std;

int fibonacciNumbers(int n){
    // Base Case 
    if(n == 0)
    return 0;

    if(n == 1)
    return 1;

    // Recursive relation 
    int ans = fibonacciNumbers(n-1) + fibonacciNumbers(n-2);
    return ans;

}
int main(){
 cout<<fibonacciNumbers(7)<<endl;
 return 0;
}