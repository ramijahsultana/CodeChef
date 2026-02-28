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
    int x = 100+(n*4);
    int y = 300;
    int val = min(x, y);
    cout << val << "\n";

    return 0;
}