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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;

        vector<int> val;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                val.push_back(a[i]);
        }

        if (val.size() < k)
        {
            cout << -1 << "\n";
            continue;
        }

        sort(val.begin(), val.end());

        ll ans = 0;
        for (int i = 0; i < k; i++)
            ans += val[i];

        cout << ans << "\n";
    }

    return 0;
}