// print all digits of a integer

#include <bits/stdc++.h>
using namespace std;

bool printInteger(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    bool prime = printInteger(4);
    if (prime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime!" << endl;
    }
    return 0;
}