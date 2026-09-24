#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;
        int ans = 0;
        if (x + y > n)
        {
            cout << "-1\n";
            continue;
        }
        ll mn = (b+g+n-1)/n;

        ll boys = b/x;
        ll girls = g/y;
        ll mx = min(boys, girls);

        if(mn <= mx)
        {
            cout << mn << "\n";
        }
        else
            cout << "-1\n";
    }

    return 0;
}