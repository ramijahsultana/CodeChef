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
        int n;
        cin >> n;

        vector<int> a(n+1);
       
        for (int i = 0; i <= n; i++)
        {
            cin >> a[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int mx = max(a[i], a[i+1]);
            ans = min(ans, mx);
        }

        cout << ans << "\n";

      
    }

    return 0;
}