#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 0, num2 = 1;
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        cout << num1 << " ";
        int num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
}