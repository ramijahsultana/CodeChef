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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        map<int, ll> m;
        for(int i=0; i<n; i++)
        {
            int val = a[i] - (i + 1);
            m[val]++;
        }    

        ll ans = 0;
        for(auto x : m)
        {
            ll k = x.second;
            ans += (k * (k - 1)) / 2;
        }

        cout << ans << "\n";
    }

    return 0;
}