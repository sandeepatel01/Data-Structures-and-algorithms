// Write a function to print the sum of 3 numbers

#include <bits/stdc++.h>
using namespace std;

void printSum(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    cout << "Sum is: " << sum << endl;
}

void printMessage()
{
    cout << "msg1" << endl;
    return;
    cout << "msg2" << endl;
}
int main()
{

    // printSum(2, 2, 2);
    printMessage();
 
    return 0;
}