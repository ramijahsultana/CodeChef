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
        vector<int> v(3);
        for(int i = 0; i < 3; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        
        
        int a = v[0] + v[1];
        if(a > v[2])
            cout << "0\n";
        else 
           cout << v[2] - a + 1 << "\n";    

    
    }

    return 0;
}