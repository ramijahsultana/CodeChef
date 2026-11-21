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
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int val;
       
        if(x > y)
        {
            a++;
            val = x-y;
            if(val > mx)
            {
                mx = val;
            }
        }
        else if(x < y)
        {
            b++;
            val = y-x;
            if(val > mx)
            {
                mx = val;
            }
        }

    }

    if(a > b)
    {
        cout << "1 " << mx << "\n";
    }
    else
    {
        cout << "2 " << mx << "\n";
    }

    return 0;
}