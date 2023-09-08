// Problem Statement -
//             1. Create 10 size array
//             2. take input in that array
//             3. double- up each value of that array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Print after input array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }

    cout << endl;
    cout << "Print after double-up array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}