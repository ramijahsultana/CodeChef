#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        stack<string> backStack, forwardStack;
        string current = "http://www.lightoj.com/";

        cout << "Case " << tc << ":\n";

        string cmd;
        while (cin >> cmd)
        {

            if (cmd == "OUIT")
                break;

            else if (cmd == "VISIT")
            {
                string url;
                cin >> url;

                backStack.push(current);
                current = url;

                while (!forwardStack.empty())
                    forwardStack.pop();

                cout << current << "\n";
            }
            else if (cmd == "BACK")
            {
                if (backStack.empty())
                    cout << "Ignored\n";
                else
                {
                    forwardStack.push(current);

                    current = backStack.top();
                    backStack.pop();

                    cout << current << "\n";
                }
            }

            else if (cmd == "FORWARD")
            {
                if (forwardStack.empty())
                    cout << "Ignored\n";
                else
                {
                    backStack.push(current);

                    current = forwardStack.top();
                    forwardStack.pop();

                    cout << current << "\n";
                }
            }
        }

        
    }

    return 0;
}    