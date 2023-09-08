// Problem Statement -
//             1. Create 5 size array
//             2. take input in that array
//             3. total sum print

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int n = 5;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << endl;
    cout << sum << " ";

    return 0;
}