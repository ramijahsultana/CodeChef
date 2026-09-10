#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x;
	    cin >> n >> x;
	    int v = n-x;
	    if(x == 0)
	        cout << "0\n";
	    else
	        cout << min(v,x) << "\n";
	                    
	}

}
