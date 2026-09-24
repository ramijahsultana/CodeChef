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
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       
        string s;
        cin >> s;
        int sum_one = 0, sum_zero =0; 
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                sum_zero += a[i];
            }
            else
            {
                sum_one += a[i];
            }
        
        }

        int option1 = sum_zero;

        int option2 = -1; 
        if (sum_zero >= c)
            option2 = sum_zero - c + sum_one;
            
        cout << max(option1, option2) << "\n";
    }

    return 0;
}