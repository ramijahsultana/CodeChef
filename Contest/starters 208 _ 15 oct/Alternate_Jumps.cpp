#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int jump  = n - 1;
        int pos = 0;

        for(int i=1; i<n; i++)
        {
            if(i == 1)
            {
                pos = n - jump;
                jump--;
            }
            else if(i % 2 == 0)
            {
                pos = pos + jump;
                jump--;
            }
            else
            {
                pos = pos - jump;
                jump--;
            }
        }

        cout << pos << "\n";
    }

    return 0;
}