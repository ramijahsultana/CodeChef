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
        int cnt = 0;
        int mx = INT_MIN;
        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            if (x >= 1)
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else
                cnt = 0;
        }
        if (mx == INT_MIN)
        {
            cout << "0\n";
        }
        else
            cout << mx << "\n";
    }

    return 0;
}