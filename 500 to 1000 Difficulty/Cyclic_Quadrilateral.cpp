#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    int v1 = a+c;
	    int v2 = b+d;
	    if(v1 == 180 && v2 == 180)
	        cout << "YES\n";
	    else 
	        cout << "NO\n";
	}

}
