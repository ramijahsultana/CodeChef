#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    if(x > y)
    {
        cout << "Alice\n";
    }
    else if(x < y)
    {
        cout << "Bob\n";
    }
    else
    {
        cout << "Draw\n";
    }


    return 0;
}