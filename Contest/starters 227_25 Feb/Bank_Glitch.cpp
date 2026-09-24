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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        while (a >= x)
        {
            a -= x;
            b += y;
        }

        cout << a + b << endl;
    }

    return 0;
}