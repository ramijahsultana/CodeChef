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

        if((n%2 == 0 && n%5 != 0) || (n%2 != 0 && n%5 == 0))
        {
            cout << "0\n";
        }
        else if(n%2 != 0 && n%5 != 0)
        {
            cout << "1\n";
        }
        else 
        {
            cout << "2\n";
        }
    }

    return 0;
}