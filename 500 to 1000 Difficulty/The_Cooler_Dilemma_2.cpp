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
        int x,y;
        cin >> x >> y;
        ll ans = (y - 1) / x;
        
        cout << ans << "\n";

    }

    return 0;
}