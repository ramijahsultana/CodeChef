#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        cnt += s[i] - '0';
    }

    cout << cnt << endl;


    return 0;
}