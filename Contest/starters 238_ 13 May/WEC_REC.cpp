#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
         int n, x, k;
        cin >> n >> x >> k;

        map<int,int, greater<int>> freq;

        for(int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            freq[v]++;
        }

        int y = 0;

        for(auto &it : freq)
        {
            if(k == 0)
                break;

            y += it.second;
            k--;
        }

        cout << min(y, x) << "\n";
    }

    return 0;
}