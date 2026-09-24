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
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        bool ok = true;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] != a[1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "-1\n";
        }
        else
        {
            if (a[1] + a[2] != a[3])
                cout << 1 << " " << 2 << " " << 3 << "\n";
            else if (a[1] + a[3] != a[2])
                cout << 1 << " " << 3 << " " << 2 << "\n";
            else if (a[2] + a[3] != a[1])
                cout << 2 << " " << 3 << " " << 1 << "\n";
        }
    }

    return 0;
}