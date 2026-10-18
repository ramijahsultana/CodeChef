#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int mn = min({a,b,c});
        int mx = max({a,b,c});
        if(a != mn && a != mx)
            cout << a << "\n";
        else if(b != mn && b != mx)
            cout << b << "\n";
        else
            cout << c << "\n";
    }
}
