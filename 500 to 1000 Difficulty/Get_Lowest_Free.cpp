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
        int a, b,c;
        cin >> a >> b >> c;
        int mn = min({a, b, c});
        int ans = (a+b+c) - mn;
        cout << ans << "\n";
    }

    return 0;
}