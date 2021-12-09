//Program to find the maximum & minimum element in an array

#include <bits/stdc++.h>
using namespace std;

int getMax(int *a,int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max){

            max = a[i];        
    }

    }
    return max;
}


int getMin(int *a,int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min){

            min = a[i];        
    }

    }
    return min;
}


int main()
{
    int n;
    cout << "Enter the size of Array:";
    cin >> n;
    int a[n], max = a[0], min = a[0];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    cout << "\nMaximum & Minimum Element are:" << getMax(a,n) << endl << getMin(a,n);
}