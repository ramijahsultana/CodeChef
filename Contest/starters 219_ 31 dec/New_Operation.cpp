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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll mn[21][21], mx[21][21];
        for (int i = 1; i <= n; i++)
        {
            mn[i][i] = mx[i][i] = a[i];
        }

        for (int len = 2; len <= n; len++)
        {
            for (int l = 1; l <= n - len + 1; l++)
            {
                int r = l + len - 1;
                mn[l][r] = LLONG_MAX;
                mx[l][r] = LLONG_MIN;
                for (int k = l; k < r; k++)
                {
                    ll minVal = mn[l][k] + 2 * mn[k + 1][r];
                    ll maxVal = mx[l][k] + 2 * mx[k + 1][r];
                    mn[l][r] = min(mn[l][r], minVal);
                    mx[l][r] = max(mx[l][r], maxVal);
                }
            }
        }
        cout << mn[1][n] << " " << mx[1][n] << "\n";
    }

    return 0;
}