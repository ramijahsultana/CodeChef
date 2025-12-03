#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k , r;
    cin >> n >> k >> r;

    int pizzas = (n - k) * r;
    cout << pizzas << "\n";

    return 0;
}