#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x, n;
        cin >> x >> n;

        int need = (n + 99) / 100;

        if (need > x)
            cout << need - x << "\n";
        else
            cout << 0 << "\n";
	}

}
