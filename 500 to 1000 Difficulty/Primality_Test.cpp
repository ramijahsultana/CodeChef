#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void is_prime(int n)
{
    if(n <= 1)
    {
        cout << "no\n";
        return;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
}
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
        is_prime(n);
    }

    return 0;
}