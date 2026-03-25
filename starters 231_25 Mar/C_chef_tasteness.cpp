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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int expensive = max(a[i], a[j]);
                int cheap = min(a[i], a[j]);

                int discount = min(expensive / 2, 100);
                int total_cost = cheap + (expensive - discount);

                if (total_cost <= k)
                {
                    ans = max(ans, b[i] + b[j]);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}