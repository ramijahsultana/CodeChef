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
        int s = 0, l = 0;
        for(int i=0; i<n; i++)
        {
            string str;
            cin >> str;
            if(str[0] == 'L')
                l++;
            else
                s++;
        }
        cout << s << " " << l << "\n";
    }

    return 0;
}