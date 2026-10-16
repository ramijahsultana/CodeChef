#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int s = x+y;
        int v1 = 500-(x*2);
        int v2 = 1000-(s*4);
        int v3 = 1000-(y*4);
        int v4 = 500-(s*2);
        int ans1 = v1+v2;
        int ans2 = v3+v4;
    
        cout << max(ans1, ans2) << "\n";
    }
}
