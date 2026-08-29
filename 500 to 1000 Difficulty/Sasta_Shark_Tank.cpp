#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;

        if (2 * A > B)
            cout << "FIRST\n";
        else if (2 * A < B)
            cout << "SECOND\n";
        else
            cout << "ANY\n";
    }

    return 0;
}