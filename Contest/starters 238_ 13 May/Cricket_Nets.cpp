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
        if(n <= 20)
        {
            cout << n*10 << "\n";
        }
        else
        {
            cout << 200 + (((n - 20)/2)*5) << "\n";
        }

    }

    return 0;
}