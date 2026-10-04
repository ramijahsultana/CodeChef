#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int w,x,y,z;
	    cin >> w >> x >> y >> z;
	    int v1 = x+y;
	    int v2 = x+z;
	    int v3 = y+z;
	    int v4 = x+y+z;
	    
	    if(w == v1 || w == v2 || w == v3 || w == x || w== y || w == z || w == v4)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}

}
