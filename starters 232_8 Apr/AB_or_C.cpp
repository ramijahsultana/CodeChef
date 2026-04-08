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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            v.pb({a, i});
            v.pb({b, i});
            v.pb({c, i});
        }

        sort(v.begin(), v.end());

        vector<int> cnt(n, 0);
        int covered = 0;

        int l = 0;
        int ans = INT_MAX;

        for(int r = 0; r < v.size(); r++)
        {
            if(cnt[v[r].second] == 0)
                covered++;

            cnt[v[r].second]++;

            while(covered == n)
            {
                ans = min(ans, v[r].first - v[l].first);

                cnt[v[l].second]--;
                if(cnt[v[l].second] == 0)
                    covered--;

                l++;
            }
           
        }
         cout << ans << "\n";
        
    }

    return 0;
}