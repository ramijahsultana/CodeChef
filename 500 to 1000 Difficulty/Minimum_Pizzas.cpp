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
        int x, y;
        cin >> x >> y;
        int total = x * y;
        int pizza = total/4;
        if(total%4 == 0)
            cout << pizza << "\n";
        else
            cout << pizza+1 << "\n";    
    }

    return 0;
}