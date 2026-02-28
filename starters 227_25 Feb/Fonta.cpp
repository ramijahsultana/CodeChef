#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[5];
    for(int i=0; i<5; i++)
    {
        cin >> s[i];
    }
    if(s[4] == 'a' && s[3] == 't' && s[2] == 'n')
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}