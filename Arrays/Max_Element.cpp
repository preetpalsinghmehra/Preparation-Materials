//Program to find the maximum element in the array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Array:";
    cin >> n;
    int a[n], max = a[0];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i =1 ;i < n;i++)
    {
        if(a[i] > max )
            max = a[i];
    }

    cout << "Maximum Element is:" << max <<endl;
}