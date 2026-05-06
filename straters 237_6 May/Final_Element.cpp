#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        while(a.size() > 1)
        {
            vector<int> b;

            for(int i = 0; i < a.size()-1; i++)
            {
                b.pb(a[i] ^ a[i+1]);
            }

            a = b;
        }

        cout << a[0] << '\n';
    
    }

    return 0;
}