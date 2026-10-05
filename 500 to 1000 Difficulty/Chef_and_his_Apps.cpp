#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int s,x,y,z;
	    cin >> s >> x >> y >> z;
	    int v = x+y+z;
	    int v1 = x+z;
	    int v2 = y+z;
	    if(s >= v)
	        cout << "0\n";
	    else if(s >= v1 || s>= v2)
	        cout << "1\n";
	   else
	        cout << "2\n"; 
	}

}
