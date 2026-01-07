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
        int freq[26] = {0};
        bool value = false;
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
            if (freq[s[i] - 'a'] >= 2)
            {
                value = true;
                break;
            }
        }
        if (value)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}