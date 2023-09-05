// Find max of 3 numbers a,b,c

#include <bits/stdc++.h>
using namespace std;

void printMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        cout << "Max number is: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Max number is: " << num2 << endl;
    }
    else
        cout << "Max number is: " << num3 << endl;
}
int main()
{
    printMax(1, 2, 3);
    return 0;
}