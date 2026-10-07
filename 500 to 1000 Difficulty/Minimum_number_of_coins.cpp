#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%5 != 0)
            cout << "-1\n";
        else
            cout << (n+5)/10 << "\n";
    }

}
