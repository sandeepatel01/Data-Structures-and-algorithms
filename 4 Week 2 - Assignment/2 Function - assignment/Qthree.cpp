// Print all prime number from 1 to N

#include <bits/stdc++.h>
using namespace std;

bool printPrimeNum(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = printPrimeNum(i);
        if (isPrime)
        {
            cout << i << " ";
        }
    }

    return 0;
}