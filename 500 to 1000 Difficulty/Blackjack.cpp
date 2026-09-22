#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    int v = 21-(x+y);
	    if(v != 21)
	    {
	        if(v >=1 && v <= 10)
	            cout << v << "\n";
	        else
	            cout << "-1\n";
	    }
	}

}
