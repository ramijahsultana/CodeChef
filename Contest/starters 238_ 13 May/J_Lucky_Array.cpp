#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int mn = *min_element(a.begin(), a.end());
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == mn)
        {
            cnt++;
        }
    }
    if(cnt % 2 == 1)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}