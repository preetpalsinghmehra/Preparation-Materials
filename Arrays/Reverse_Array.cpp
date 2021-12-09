#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int a[n] = {12, 2, 5, 7, 89,100};

    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}