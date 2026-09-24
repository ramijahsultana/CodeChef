#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        long long A, B, C;
        cin >> A >> B >> C;

        if (A == B)
        {
            cout << 0 << '\n';
        }
        else if (__gcd(A, C) == __gcd(B, C))
        {
            cout << 1 << '\n';
        }
        else if (__gcd(A, C + 1) == __gcd(B, C + 1))
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 3 << '\n';
        }
    }

    return 0;
}