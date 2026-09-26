#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    int v = y*(x/y);
	    int b = x/y;
	    int ans = x-v;
	    if(x<y)
	       cout << x << "\n";
	    else
	        cout << b+ans << "\n";
	}

}
