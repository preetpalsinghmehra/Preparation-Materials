#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *a, int n, int e)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == e)
            return i + 1;
    }

    return 0;
}
int main()
{
    int n, e;
    cout << "Enter the size of array:";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the element to Search: ";
    cin >> e;
    int found = linearSearch(a, n, e);
    if (!found)
        cout << "Not Found!!" << endl;
    else
        cout << "Element found at position: " << found << endl;
}