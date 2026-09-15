#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--)
	{
	    int x,y,z;
	    cin >> x >> y >> z;
	    int v = y/x;
	    if(v > z)
	        cout << "0\n";
	    else
	        cout << z-v << "\n";
	}

}
