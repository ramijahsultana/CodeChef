#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    if(z <= 50)
    {
        cout << x << "\n";
    }
    else
    {
        int v = z - 50;
        cout << (x + (y*v)) << "\n";
    }

    return 0;
}