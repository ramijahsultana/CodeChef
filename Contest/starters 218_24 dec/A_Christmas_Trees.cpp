#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, m, b;
    cin >> n >> a >> m >> b;
    int buy = n*a;
    int sell = m*b;
    if(buy >= sell)
    {
        cout << "-" << buy - sell << "\n"; 
    }
    else
    {
        cout << sell - buy << "\n";
    }

    return 0;
}