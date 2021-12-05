#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 12345;
    int sum = 0, rem = 0;

    while (n)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    cout << sum;
}