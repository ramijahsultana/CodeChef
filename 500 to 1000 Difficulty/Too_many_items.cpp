#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int v = 10*(n/10);
	    int ans = n - v;
	    if(ans == 0)
	        cout << n/10 << "\n";
	    else
	        cout << (n/10)+1 << "\n";
	}
	

}
