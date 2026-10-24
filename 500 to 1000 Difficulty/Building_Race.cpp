#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a * y < b * x)
        {
            cout << "Chef\n";
        }
        else if (a * y > b * x)
        {
            cout << "Chefina\n";
        }
        else
        {
            cout << "Both\n";
        }
    }
}
