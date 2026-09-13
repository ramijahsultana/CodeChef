#include <bits/stdc++.h>
using namespace std;

void fact(int n)
{
    int a[200];
    int size = 1;

    a[0] = 1;

    for(int i = 2; i <= n; i++)
    {
        int carry = 0;

        for(int j = 0; j < size; j++)
        {
            int x = a[j] * i + carry;

            a[j] = x % 10;
            carry = x / 10;
        }

        while(carry > 0)
        {
            a[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
    }

    for(int i = size - 1; i >= 0; i--)
        cout << a[i];

    cout << '\n';
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

        fact(n);
    }

    return 0;
}