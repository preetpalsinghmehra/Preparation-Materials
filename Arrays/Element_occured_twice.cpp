#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 1, 2, 3, 4};

    int res = 0;
    for (int i = 1; i < 5; i++)
        res ^= i;
    
    int x = 0;
    for (int i = 0; i < 5; i++)
        x ^= a[i];

    cout << (x ^ res);
}