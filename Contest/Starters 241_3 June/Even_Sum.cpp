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
        vector<int> a(n);
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        bool even = false;
        for(int i=0; i<n; i++)
        {
            if((sum - a[i]) % 2 == 0)
            {
                even = true;
                break;
            }
        }
        if(even)
            cout << "Yes\n";
        else
            cout << "No\n";

    }

    return 0;
}