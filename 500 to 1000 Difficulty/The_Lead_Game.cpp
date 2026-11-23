#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int a = 0, b = 0;
    int mx = 0;
    int aval = 0, bval = 0;
    int x, y;
    cin >> x >> y;
    aval += x;
    bval += y;
    t--;
    int v = 0;
    int val = 0;
    if(x > y)
    {
        val = x-y;
        mx = val;
        v = 1;
    }
    else if(y > x)
    {
        val = y-x;
        mx = val;
        v = 2;
    }
    
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        
       
        
        if(aval > bval)
        {
            a++;
            aval += x;
            val = x-y;
            if(val > mx)
            {
                mx = val;
                v = 1;
            }
        }
        else if(aval < bval)
        {
            b++;
            bval += y;
            val = y-x;
            if(val > mx)
            {
                mx = val;
                v = 2;
            }
        }

    }

    
    if(v == 1)
    {
        cout << "1 " << mx << "\n";
    }
    else
    {
        cout << "2 " << mx << "\n";
    }

    return 0;
}