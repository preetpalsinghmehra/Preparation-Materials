#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Preet";
    int f = 0;
    int n = s.length();

    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            f = 1;
    }

    if (f)
        cout << "Not a Palindrome";
    else
        cout << "Palindrome";
}