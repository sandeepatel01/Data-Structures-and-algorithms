// Write a function to return sum of 3 numbers

#include <bits/stdc++.h>
using namespace std;

int printSum(int num1, int num2, int num3)
{
    int ans = num1 + num2 + num3;
    return ans;
}
int main()
{

    int sum = printSum(2, 3, 4);
    cout << "Sum is: " << sum << endl;
    return 0;
}