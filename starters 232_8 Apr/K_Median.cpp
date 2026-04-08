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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll m = n - k;
        ll pos = (m-1)/2;

        set<ll> s;

        for(int i=0; i+m<=n; i++)
        {
            s.insert(v[i+pos]);

        }

        for(auto it : s)
        {
            cout << it << " ";
        }
        cout << "\n";

    }

    return 0;
}