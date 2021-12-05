#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime number" << endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        cout << "Prime number";
    
}