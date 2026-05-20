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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = a[0] + a[n - 1];

        bool ok = true;

        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] + a[n - 1 - i] != sum)
            {
                ok = false;
            }
        }

        if (ok)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}