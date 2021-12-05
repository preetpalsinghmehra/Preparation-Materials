#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1330, total =0;

    while(a)
    {
        cout << a;
        if(a>100)
        {
            total += a/100;  // 13
            a -= total * 100; // 330
        }
        else if(a>50)  
        {
            total += a/50; // 13+6 = 19
            a -= total * 50; // 30
        }
        else if(a>0)
        {
            total += a/1; // 30
            a -= total * 1; // 0
            
        }
    }

    cout << total;
}

