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
        int n,k,m;
        cin >> n >> k >> m;
        int v = n/(k*m);
        int x = n%(k*m);
        if(x == 0)
        {
            cout << v << "\n";
        
        }
        else
        {
            cout << v+1 << "\n";
        }

    }


    return 0;
}