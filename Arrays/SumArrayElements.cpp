// Program to print the sum of elements of an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the Size of an array:";

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << "Sum of elements of an array is: " << sum << endl;
}