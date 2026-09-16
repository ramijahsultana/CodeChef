#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    int diff = y - x;
        int ans = (diff + 7) / 8;
        
        cout << ans << "\n";
	}

}
