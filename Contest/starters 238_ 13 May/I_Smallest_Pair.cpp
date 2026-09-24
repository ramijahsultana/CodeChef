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
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        int mn = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
                mn = min(mn, a[i] + a[j] + j - i);
        }
        cout << mn << '\n';
    }

    return 0;
}