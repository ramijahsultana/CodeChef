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
        int x, y, z;
        cin >> x >> y >> z;
        int val = min(x,z) + y/2;

        cout << val << "\n";
    }

    return 0;
}