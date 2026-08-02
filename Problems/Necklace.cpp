#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.push(x);
        }

        int v = n - k;
        stack<int> a;
        while (v-- && !s.empty())
        {
            a.push(s.top());
            s.pop();
        }   
        
        stack<int> b;
        while (!s.empty())
        {
            b.push(s.top());
            s.pop();
        }

        while (!a.empty())
        {
           cout << a.top() << " ";
           a.pop(); 
        }

        while (!b.empty())
        {
            cout << b.top() << " ";
            b.pop();
        }

        
        cout << "\n";
    }

    return 0;
}