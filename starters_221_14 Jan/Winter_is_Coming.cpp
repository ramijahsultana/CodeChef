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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        int j = 0;
        bool wear = false;
        for(int i=0; i<n; i++)
        {
            if(v[i] < a)
            {
                if(!wear)
                {
                    j++;
                    wear = true;
                }
            }
            else if(v[i] > b)
            {
                wear = false;
            }
                

        }

        cout << j << "\n";
    }

    return 0;
}