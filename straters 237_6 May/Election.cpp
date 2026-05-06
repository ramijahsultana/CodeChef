#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	
	int t = (n/2)+1;
	if(t > k)
	{
	    cout << t-k << "\n";
	}
	else
	    cout << "0\n";

}
