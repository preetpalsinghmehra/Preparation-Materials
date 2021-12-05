#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    int setBits = 0;
    while(n)
    {
        if(n&1)
        {
            setBits++;
        }
        n = n>>1;

    }
    cout << setBits << endl;
    if(setBits == 1)
        cout << "Power of 2"  << endl;
    else    
        cout << "Not Power of 2" << endl;
}

// 16 8 4 2 1
// 1  0 0 0 0 