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
        int n, x, k;
        cin >> n >> x >> k;

        int ans = INT_MAX;

        for (int i = 0; i <= n; i += k)
        {
            ans = min(ans, abs(x-i));
        }

        cout << ans << "\n";
    }

    return 0;
}