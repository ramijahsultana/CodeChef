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
        int a, b, c;
        cin >> a >> b >> c;

        bool ok = false;
        for (int x = 0; x <= 20; x++)
        {
            for (int y = 0; y <= 20; y++)
            {
                int A = a - x;
                int B = b - 2 * x - y;
                int C = c  - 3 * y;
                if (A == 0 && B == 0 && C == 0)
                {
                    ok = true;
                    break;
                }
            }
        }
        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}