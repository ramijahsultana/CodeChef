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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
        }

       sort(a.rbegin(), a.rend()); 

        bool ok = true;

        for(ll i = 0; i < n; i++)
        {
            if(a[i] < n - i)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}