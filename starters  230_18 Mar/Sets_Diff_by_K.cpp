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

        vector<int> v(n), p;

        for (int i = 0; i < n; i++)
            cin >> v[i];


        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                p.push_back(i + 1);
        }

 
        if (p.empty())
        {
            cout << "No\n";
            continue;
        }

        bool ok = true;

        for (int i = 1; i < (int)p.size(); i++)
        {
            if (p[i] - p[i - 1] <= k)
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << "No\n";
            continue;
        }

        for (int i = 1; i <= n; i++)
        {
            if (v[i - 1] == 0)
            {
                bool covered = false;

                for (int x : p)
                {
                    if (abs(x - i) <= k)
                    {
                        covered = true;
                        break;
                    }
                }

                if (!covered)
                {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}