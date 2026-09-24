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
        int ans = x + (x - 1) / (y - 1);

        cout << ans << "\n";
    }

    return 0;
}