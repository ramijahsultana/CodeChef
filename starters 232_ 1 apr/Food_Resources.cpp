#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int low = 1, high = *max_element(a.begin(), a.end());
    ll ans = 0;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        ll total = 0;
        for (int i = 0; i < n; i++)
           total += a[i] / mid;

        if (total >= m)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
        
    }

    cout << ans << "\n";

    return 0;
}