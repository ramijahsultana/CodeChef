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
        // ll val = x+y;
        // if (x == 0)
        // {
        //     if (y % 2 == 1)
        //         cout << "Bob\n";
        //     else
        //         cout << "Alice\n";
        // }
        // else if (y == 0)
        // {
        //     if (x % 2 == 0)
        //         cout << "Bob\n";
        //     else
        //         cout << "Alice\n";
        // }
        // else if (x % 2 == 1 && y % 2 == 1)
        // {
        //     cout << "Alice\n";
        // }
        // else if (x % 2 == 0 && y % 2 == 0)
        // {
        //     cout << "Bob\n";
        // }
        // else 
        // {
        //     if (val % 2 == 1)
        //         cout << "Alice\n";
        //     else
        //         cout << "Bob\n";
        // }

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