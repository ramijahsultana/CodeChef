#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        vector<int> ball(n+1);
        for(int i = 1; i <= n; i++)
        {
            cin >> ball[i];
        }
        vector<int> ballons(n+1);
        ll sum = 0;
        for(int i=1; i<=n; i++)
        {
            ballons[i] = ball[i]*i;
            sum += ballons[i];
        }
        cout << sum << "\n";
    }

    return 0;
}