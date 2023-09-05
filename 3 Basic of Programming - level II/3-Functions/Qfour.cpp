// Sun of all number upto 1 to N

#include <bits/stdc++.h>
using namespace std;

void findSumUptoN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // sum = sum + i;
        sum += i;
    }
    cout << "Final sum: " << sum << endl;
}
int main()
{
    findSumUptoN(10);

    return 0;
}