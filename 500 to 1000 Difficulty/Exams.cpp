#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y,z;
	    cin >> x >> y >> z;
	    
	    int v = (x*y)/2;
	    if(v < z)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}

}
