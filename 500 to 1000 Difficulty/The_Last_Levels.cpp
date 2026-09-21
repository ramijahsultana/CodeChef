#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y,z;
	    cin >> x >> y >> z;
	    int ans = x*y;
	    int brk = (x/3)*z;
	    if(x%3 == 0)
	        cout << (ans+brk)-z << "\n";
	    else
	        cout << ans+brk << "\n";
	}

}
