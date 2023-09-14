//  shift  array with k elements by 1

#include <bits/stdc++.h>
using namespace std;

void rightShiftArr(int arr[], int n, int k)
{
    int temp[] = {50,60};
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int k = 2;

    rightShiftArr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}