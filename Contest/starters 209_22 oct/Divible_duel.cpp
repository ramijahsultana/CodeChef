#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int s_even = 0, s_odd = 0;
        for(int i=x; i<=y; i += x)
        {
            if(i%2 == 0)
                s_even += i;
            else
                s_odd += i;    
        }

        if(s_even >= s_odd)
            cout << "YES\n";
        else
            cout << "NO\n";    
    }

    return 0;
}   