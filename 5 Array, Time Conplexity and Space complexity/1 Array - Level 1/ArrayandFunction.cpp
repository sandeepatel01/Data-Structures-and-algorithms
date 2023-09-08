#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// found - true
// not found - false

bool linearArr(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found
            return true;
        }
    }
    // Not found
    return false;
}
int main()
{

    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int target = 9;

    // function call
    //  printArray(arr, size);

    bool linear = linearArr(arr, size, target);
    if (linear == 1)
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }
    return 0;
}