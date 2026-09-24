#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y, z;
    cin >> x >> y >> z;
    
    int t = x + z;
     if (y > t)
        cout << 0 << "\n";
    else
        cout << (t - y + 1) << "\n";

}
