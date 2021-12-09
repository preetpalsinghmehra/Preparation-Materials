#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, s = 5;
    int a[n] = {1, 2, 3, 4, 5};
    int i = 1, j = n;

    while (i < n and i < j)
    {
        if (a[i] + a[j] == s)
        {
            cout << i << " " << j << endl;
            i++;
            j--;
        }
        else if (a[i] + a[j] > s)
            j--;
        else
            i++;
    }

    //cout << i << j;
}