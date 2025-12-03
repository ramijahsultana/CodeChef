#include <bits/stdc++.h>
using namespace std;
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
        int max_distance = INT_MIN;
        int winner = 1;
        vector<pair<int, int>> v;
        while (n--)
        {
            bool already = false;
            int d, t;
            cin >> d >> t;
            int total = (d / t);
            int mx = max(max_distance, total);
            max_distance = mx;
            for(auto &p : v)
            {
                if (p.first == total)
                {
                    already = true;
                    break;
                }
            }

            if (!already)
            {
                v.push_back({total, winner});
            }

            winner++;
        }
        for (auto [x, y] : v)
        {
            if (x == max_distance)
            {
                cout << y << "\n";
                break;
            }
        }
    }

    return 0;
}