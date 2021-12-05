#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *a,int n)
{
    for(int i = 0; i < n; i++)
    {
        int min = a[i];
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if(a[j]< min)
            {
                min = a[j];
                minIndex = j;
            }
        }
        swap(a[i],a[minIndex]);   
    }
}

int main()
{
    int n = 6;
    int a[n] = {1, 100, 2902, 320, 40, 500};

    selectionSort(a,n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

}