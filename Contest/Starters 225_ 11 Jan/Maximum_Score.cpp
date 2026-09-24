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
        vector<int> a(n), b(n);
        ll total = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
            
        }
        ll mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mn = min(mn, (ll)a[i] - b[i]);
        }
            

       
        cout << total - mn << "\n";
    }

    return 0;
}