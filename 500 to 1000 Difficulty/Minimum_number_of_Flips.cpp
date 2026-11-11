#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
                sum++;
                
        }

        if (n % 2 != 0)
        {
            cout << "-1\n";
            continue;
        }
           
        int cnt = n/2;

        cout << abs(sum - cnt) << "\n";
    }

    return 0;
}