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
        for(int i=0; i<n; i++)
            cin >> a[i];

        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] > a[i+1])
            {
                sum += a[i];
            }
            else
            {
                sum += a[i+1]*2;
                i++;
            }
        }    

        cout << sum << "\n";
    }


    return 0;
}