#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int pages = 100*b;
    int book = pages*a;

    cout << book << "\n";

    return 0;
}