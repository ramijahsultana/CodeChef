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
        int x, y, z;
        cin >> x >> y >> z;
        if (x >= 50 && y >= 50)
        {
            cout << "Yes\n";
        }
        else if (x >= 50 && z >= 50)
        {
            cout << "Yes\n";
        }
        else if (y >= 50 && z >= 50)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}