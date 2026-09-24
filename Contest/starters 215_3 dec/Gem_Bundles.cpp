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
        int a, b, c;
        cin >> a >> b >> c;
        int mn = min(a, min(b,c));
        int total;
        if(a == 0 || b == 0 || c == 0)
        {
            a = a*3;
            b = b*3;
            c = c*3;
            total = a+b+c;
        }
        else if(a == b && b == c)
        {
            total = a*10;
        }
        else
        {
            total = mn*10;
            a = (a-mn)*3;
            b = (b-mn)*3;
            c = (c-mn)*3;
            total = total+(a+b+c);
        }
        cout << total << "\n";
    }

    return 0;
}