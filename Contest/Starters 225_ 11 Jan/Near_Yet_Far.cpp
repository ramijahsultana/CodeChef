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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll ans = 0;
        for(int l =0; l<k; l++)
        {
            for(int r = n-k; r<n; r++)
            {
                if (abs(l - r) >= 2) {
                    ans = max(ans, llabs(a[l] - a[r]));
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}