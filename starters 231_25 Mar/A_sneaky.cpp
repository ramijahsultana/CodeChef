#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if(s[0] == 's' || s[3] == 's')
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";

    return 0;
}