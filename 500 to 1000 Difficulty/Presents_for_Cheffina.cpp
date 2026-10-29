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
           ll free_gifts = n / 5;
        ll ans = n - free_gifts;
        
        cout << ans << "\n";
    }

    return 0;
}