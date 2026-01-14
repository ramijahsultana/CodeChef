#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool contains_odd(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit % 2 == 1)
            return true;
        num /= 10;
    }
    return false;
}

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
        string s = to_string(n);
        if (n % 2 == 1)
        {
            cout << "0\n";
            continue;
        }
        
        bool has_odd_digit = false;
        for (char ch : s)
        {
            if ((ch - '0') % 2 == 1)
            {
                has_odd_digit = true;
                break;
            }
        }

        if (has_odd_digit)
        {
            cout << "1\n";
            continue;
        }

        if (s.length() == 1)
        {
            cout << "-1\n";
            continue;
        }

        bool found = false;
        for (char ch : s)
        {
            int d = ch - '0';
            if (contains_odd(n - d))
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "2\n";
        }
        else
        {
            cout << "3\n";
        }
    }

    return 0;
}