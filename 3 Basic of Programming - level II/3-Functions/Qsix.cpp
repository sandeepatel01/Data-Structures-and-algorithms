// Check number is prime or not

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // reminder = 0 -> perfectly divisible
            // not a prime number
            return false;
        }
    }
    // yaha pr me kah sakta hu
    // k [2,3,4........ n-1] koi bhi N ko perfectly divide nhi kr paya hoga

    // it means, N is a prime number
    return true;
}
int main()
{

    bool number = checkPrime(8);
    if (number)
    {
        cout << "its a prime number" << endl;
    }
    else
    {
        cout << "its not a prime number" << endl;
    }

    return 0;
}