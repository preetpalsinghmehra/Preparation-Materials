#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "teerP";
    int n = s.length();

    for (int i = 0; i <= n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }

    cout << s;
}



