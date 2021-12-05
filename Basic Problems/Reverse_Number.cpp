#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 56365;
    int rem, rev;

    while (n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    cout << rev;
}