#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if(n == 1)
        cout << "8000\n";
    else if (n == 2)
        cout << "4000\n";
    else if (n == 3)
        cout << "2000\n";    
    else
        cout << "1000\n";
    


    return 0;
}