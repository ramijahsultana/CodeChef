#include <bits/stdc++.h>
using namespace std;

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

        vector<int> a(n+1);
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> ans(n+1, 0);
        vector<vector<int>> A(n+1);

        for(int i = 1; i <= n; i++)
            A[a[i]].push_back(i);

        vector<bool> val(n+1, true);

        int turnHits = 0;

        for(int i = 1; i <= n; i++)
        {
            if(!val[i]) continue;

            turnHits++;

            ans[i] = turnHits - 1;
            val[i] = false;


            for(int j : A[turnHits])
            {
                if(val[j])
                {
                    ans[j] = turnHits;
                    val[j] = false;
                }
            }
        }

        for(int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}