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
        int n;
        cin >> n;
        vector<int> a(n);
        int freq[101] = {0};
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int mx = 0;
        int ans = -1;
        for(int i=0; i<=100; i++)
        {
            if(freq[i] > mx)
            {
                mx = freq[i];
                ans = i;
            }
            else if(freq[i] ==  mx && ans != -1)
            {
                ans = min(ans, i);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}