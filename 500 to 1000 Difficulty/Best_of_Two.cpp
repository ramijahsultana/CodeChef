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
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int amin = min({a1, a2, a3});
        int bmin = min({b1, b2, b3});
        int aans = (a1 + a2 + a3) - amin;
        int bans = (b1 + b2 + b3) - bmin;
        
        if(aans > bans)
            cout << "Alice\n";
        else if(bans > aans)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }

    return 0;
}