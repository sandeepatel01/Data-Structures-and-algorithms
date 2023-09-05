// Sum of all even number upto 1 to N

#include <bits/stdc++.h>
using namespace std;

void evenSum(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        sum += i;
    }
    cout << "final Sum: " << sum << endl;
}

void findSumEvenUptoN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sum+=i;
        }
    }
    cout<<"Final sum: "<<sum<<endl;
}

int main()
{

    // evenSum(10);
    findSumEvenUptoN(10);

    return 0;
}