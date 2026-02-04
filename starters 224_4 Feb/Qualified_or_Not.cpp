#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    int xval = 2*x;
    int yval = 2*y;
    if(n >= xval && n >= yval)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";


    return 0;
}