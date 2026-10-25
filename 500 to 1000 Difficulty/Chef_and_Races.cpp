#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    int cnt = 0;
	    if(a!=c && a!=d)
	       cnt++;
	    if(b!=d && b!=c)
	        cnt++;
	    
	    cout << cnt << "\n";
	    
	}

}
