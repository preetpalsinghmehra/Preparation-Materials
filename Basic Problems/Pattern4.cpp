#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int count = i;
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << "\n";
    }
}

/* output 

1
23
345
4567
56789

*/