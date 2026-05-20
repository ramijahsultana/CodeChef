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
        vector<int> a(n + 1);
        map<int, vector<int>> pos;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }

        int ans = 1e9;

        for (auto it : pos)
        {
            vector<int> v = it.second;

            if (v.size() >= 2)
            {
                int l = v.front();
                int r = v.back();

                ans = min(ans, (l - 1) + (n - r));
            }
        }

        if (ans == 1e9)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}