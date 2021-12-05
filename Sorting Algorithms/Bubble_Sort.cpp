#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *a, int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int n = 6;
    int a[n] = {10000, 100, 22, 320, 40, 5};

    bubbleSort(a,n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}


//10 100 22 320 40 5
/*
10 22 100 40 5 320

10 22 40 5 100 320

10 22 5 40 100 320

10 5 22 40 100 320
5 10 22 40 100 320
*/