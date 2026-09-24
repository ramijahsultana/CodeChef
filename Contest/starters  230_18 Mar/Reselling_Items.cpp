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
        int n, k;
        cin >> n >> k;
        vector<int> m;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;
            m.pb(x);
        }

        sort(m.rbegin(), m.rend());

        int v = 0;
        
        for(int i=0; i<k; i++)
        {
            if(m[i] > 5)
                v += (m[i] - 5);
        }

        for(int i=k; i<n; i++)
        {
            if(m[i] > 10)
            {
                int val = m[i] - 10;
                v += val;
            }
            else
            {
                break;
            }
        }
        cout << v << "\n";
    }

    return 0;
}