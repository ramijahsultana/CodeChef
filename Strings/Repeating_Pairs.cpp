#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int cnt[26][26] = {};

    for (int i = 0; i < s.size() - 1; i++)
    {
        int a = s[i] - 'a';
        int b = s[i + 1] - 'a';

        cnt[a][b]++;
    }

    int ans = 0;

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (cnt[i][j] >= 2)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}