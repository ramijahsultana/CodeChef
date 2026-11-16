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
        int cnt = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if(a != 0)
            {
                ans = cnt;
            }
            cnt++;
        }
        cout << ans << "\n";
    }

    return 0;
}