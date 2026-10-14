#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        if (a * y > b * x) {
            cout << "Alice\n";
        } else if (a * y < b * x) {
            cout << "Bob\n";
        } else {
            cout << "Equal\n";
        }
    }
}
