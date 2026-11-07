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
        int a,b,k;
        cin >> a >> b >> k;
        int ans = 0;
        if(a == b)
            cout << "0\n";
        else
        {
            int mn = min(a,b);
            int diff = abs(a-b);
            while(diff > 0)
            {
                diff -= k;
                ans++;
                if(diff <= 0)
                {
                    cout << ans << "\n";
                    break;
                }
            }
        }
            
    }

    return 0;
}