#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int one = 0, two = 0, three = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                one++;
            else if (x == 2)
                two++;
            else
                three++;
        }
        int del = max(0, two - 1);
        int del1 = min(one, three);
        cout << del + del1 << "\n";

    }

    return 0;
}