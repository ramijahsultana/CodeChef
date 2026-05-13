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
        long long m;
        cin >> n >> m;
if(n == 1)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<long long> a(n);

        a[0] = 1;
        a[1] = 1;

        for(int i = 2; i < n; i++)
        {
            a[i] = (a[i-1] - a[i-2]) % m;
            if(a[i] < 0) a[i] += m;
        }

        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}