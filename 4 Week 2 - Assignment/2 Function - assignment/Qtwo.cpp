// Write a function to fimd the factorial of a number

#include <bits/stdc++.h>
using namespace std;

void printFact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Fact is: " << fact << endl;
}

int main()
{
    printFact(10);
    return 0;
}