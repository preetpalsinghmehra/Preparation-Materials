#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the Size of the array: ";
    cin >> n;
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i+=2)
    {
        if ( i + 1 < n)
        {
            swap(a[i], a[i + 1]);
            //i++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}