// check even or odd numbers

#include <bits/stdc++.h>
using namespace std;

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}
int main()
{

    checkEvenOdd(5);

    return 0;
}