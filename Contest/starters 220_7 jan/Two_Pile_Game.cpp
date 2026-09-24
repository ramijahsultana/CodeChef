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
        ll x, y;
        cin >> x >> y;

        if(x%2 == 1)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }


    return 0;
}