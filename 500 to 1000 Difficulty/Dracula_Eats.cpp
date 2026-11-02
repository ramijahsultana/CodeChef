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
        int ans = (n >= 2) ? (n - 1) / 7 : 0;
        
        cout << ans << "\n";
    
    }
    
    return 0;
}