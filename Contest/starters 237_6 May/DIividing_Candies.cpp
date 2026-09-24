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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
         
        sort(v.rbegin(), v.rend());   
        bool is = false;
        for(auto &i : v)
        {
            if(i % x == 0)
            {
                is = true;
                cout << i << "\n";
                break;
                
            }
            
        }

        if(is == false)
            cout << "0\n";

    }

    return 0;
}