#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    string t;
    cin >> t;
    stringstream ss(s);
    string word;
    bool y = false;
    while(ss >> word)
    {
        if(word == t)
        {
            y = true;
            break;
        }
           
    }
    
    if(y)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }


    return 0;
}