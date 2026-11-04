#include <bits/stdc++.h>
using namespace std;

int main() {
	int r,o,c;
	cin >> r >> o >> c;
	int v = (20-o)*6;
	int b = (v*6)+c;
	
	if(b > r)
	    cout << "YES\n";
	else
	    cout << "NO\n";
	

}
