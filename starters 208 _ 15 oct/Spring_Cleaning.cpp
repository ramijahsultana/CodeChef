#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int small = x*30;
    int large =  y*60;

    int total = small + large;

    cout << total << "\n";


    return 0;
}