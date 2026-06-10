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
        int n,m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        int v = min(n,m);
        string u;
        for(int i=0; i<v; i++)
        {
            if(s[i] == t[i])
                u += s[i];
            else
                break;
        }
        cout << u << "\n";
    }

    return 0;
}