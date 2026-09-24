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
        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if(sum % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}