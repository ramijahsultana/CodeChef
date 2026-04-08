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
    while(t--)
    {
        int n,m,a,b,c;
        cin >> n >> m >> a >> b >> c;
        int mn = min(n,m);
        int combo = c*mn;
        int ans = 0;
        if(n > m)
        {
            int rem = n-m;
            ans = combo + rem*a;
            cout << ans << "\n";
        }
        else
        {
            int rem = m-n;
            ans = combo + rem*b;
            cout << ans << "\n";
        }

    }

    return 0;
}