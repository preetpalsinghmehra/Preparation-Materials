// Program to find the difference of sum of digits & muliplication of digits of a given number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 123;
    int sum = 0, mul = 1, rem = 0;

    while (n)
    {
        rem = n % 10;
        sum += rem;
        mul *= rem;
        n /= 10;
    }

    cout << (mul - sum) << endl;
}