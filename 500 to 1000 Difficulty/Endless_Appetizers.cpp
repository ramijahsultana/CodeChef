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
        int x,y, z;
        cin >> x >> y >> z;
        int xtra = z/30;
        double ans = ceil((double)(xtra + x) / y);
        cout << ans << "\n";
    }

    return 0;
}