#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[26] = {0};
        for(char c : s)
            freq[c - 'a']++;

        bool possible = true;
        for(char c : s)
        {
            if(freq[c - 'a'] > 2)
            {
                possible = false;
                break;
            }
        }    
        if(possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}