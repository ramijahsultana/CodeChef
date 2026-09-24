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
        int n;
        cin >> n;
        string s;
        cin >> s;
        char a[26] = {0};
        for (char &c : s)
        {
            c = tolower(c);
            a[c - 'a']++;
        }

        int mx1 = 0, mx2 = 0;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] >= mx1)
            {
                mx2 = mx1;
                mx1 = a[i];
            }
            else if (a[i] > mx2)
            {
                mx2 = a[i];
            }
        }

        cout << mx1 + mx2 << "\n";
    }

    return 0;
}