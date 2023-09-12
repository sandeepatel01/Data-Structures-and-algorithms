// Find Unique Elements 

#include <bits/stdc++.h>
using namespace std;

int printUniqueElemens(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {10, 2, 11, 10, 2, 13, 15, 13, 15};
    int n = 9;

    int uniqueElement = printUniqueElemens(arr, n);
    cout << "Unique Element is: " << uniqueElement << endl;

    return 0;
}