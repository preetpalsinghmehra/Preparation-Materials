// Binary to Decimal conversion

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1010;
    int ans = 0 ;
    int i = 0;

    while(n)
    {
        int digit = n % 10;
        ans = (digit * pow(2,i)) + ans;
        n = n / 10;
        i++;
    }

    cout << ans << endl;
}