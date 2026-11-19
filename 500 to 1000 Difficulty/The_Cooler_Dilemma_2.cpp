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
        int x,y;
        cin >> x >> y;
        int c = y/x;
        int v = y%x;
        if(x == y)
            cout << "0\n";
        else
            cout << c << "\n";

    }

    return 0;
}