#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    if(x >= 200)
        cout << x-50 << "\n";
    else
        cout << x << "\n";    

    return 0;
}