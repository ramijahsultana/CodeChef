#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long bit = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (bit & x)
                ok = false;

            bit |= x;
        }

        cout << (ok ? "Yes" : "No") << '\n';
    }

    return 0;
}