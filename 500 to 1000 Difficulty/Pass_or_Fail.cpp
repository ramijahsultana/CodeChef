#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,y;
	    cin >> n >> x >> y;
	    int v1 = n-x;
	    int v = (x*3)-v1;
	    if(v >= y)
	        cout << "PASS\n";
	   else
	        cout << "FAIL\n";
	    
	}

}
