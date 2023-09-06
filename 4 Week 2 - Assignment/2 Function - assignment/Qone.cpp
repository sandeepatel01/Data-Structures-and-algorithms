// Write a function to find area of circle

#include <bits/stdc++.h>
using namespace std;

void circleArea(int rad)
{
    float area = 3.14 * rad * rad;
    cout << "Circle Area is: " << area << endl;
}
int main()
{
    circleArea(4);
    return 0;
}