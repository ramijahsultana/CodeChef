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
        int n,x,k;
        cin >> n >> x >> k;
        int v = k/x;
        if(n>v)
            cout << v << "\n";
        else
            cout << n << "\n";
    }

    return 0;
}