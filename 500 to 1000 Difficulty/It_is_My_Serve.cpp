#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int p,q;
        cin >> p >> q;
        int v = p+q;
        int turn = v/2;
        if(turn%2 == 0)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

}
