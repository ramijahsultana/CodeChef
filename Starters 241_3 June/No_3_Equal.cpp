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
        int cnt = 0;

        for(int i=0; i<n-2; i++)
        {
            if(s[i] == s[i+1] && s[i+1] == s[i+2]){
                cnt++;
                i += 2;
            }
               
        }

        cout << cnt << '\n';
    }

    return 0;
}