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
        int n,a,b;
        cin >> n >> a >> b;
        int ans = 0;
        int cnt = 0;
        while(n > 1)
        {
            ans+=a;
            n /= 2;
            cnt++;
        }

        cout << ans+b*(cnt-1) << "\n";
    }

    return 0;
}