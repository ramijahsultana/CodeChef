#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int val = 0; 
        int mn = INT_MAX;
        bool found = true;
        for(int i=0; i<n; i++)
        {
            int x1, x2;
            cin >> x1 >> x2;
            val = abs(a-x1) + abs(b-x2);
            
            if(a == x1 && b == x2)
            {
                cout << "0\n";
                found = false;
                continue;
            }
            else if(val <= mn)
            {
                mn = val;
            }
            mn = min(mn, val);
            
        }
        if(found)
            cout << mn << "\n";
    }


    return 0;
}