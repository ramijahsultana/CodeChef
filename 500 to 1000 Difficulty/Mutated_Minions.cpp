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
        int n,k;
        cin >> n >> k;
        int cnt = 0;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            a[i] = a[i]+k;
            if(a[i] % 7 == 0)
                cnt++;
        }
        
        cout << cnt << "\n";
    }

    return 0;
}