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
        int a, b;
        cin >> a >> b;
        int small = 100;
        int large = 225;
       
        if (small*b == large*a)
        {
            cout << "Equal\n";
        }
        else if (small*b > large*a)
        {
            cout << "Small\n";
        }
        else
            cout << "Large\n";
    }

    return 0;
}