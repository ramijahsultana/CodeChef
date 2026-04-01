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

    if(n <= 7)
        cout << n << "\n";
    else
        cout << 7 << "\n";    

    return 0;
}