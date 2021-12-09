//Program to find the unique element in an array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the Size of the array: ";
    cin >> n;

    int a[n];

    /*unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (auto e : mp)
    {
        if (e.second == 1)
            cout << "Unique Element is: " << e.first << endl;
    }*/

    for(int i=0;i<n;i++)
        cin>> a[i];

    int res = a[0];

    for(int i=1;i<n;i++)
    {
        res ^= a[i];
    }

    cout << res;
}