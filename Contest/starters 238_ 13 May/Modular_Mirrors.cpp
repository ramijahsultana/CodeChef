#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        long long M;
        cin >> N >> M;

        if (N % 3 != 2)
        {
            cout << -1 << '\n';
            continue;
        }

        vector<long long> pattern = {1, 1, 0, M - 1, M - 1, 0};

        for (int i = 0; i < N; i++)
        {
            cout << pattern[i % 6] << " ";
        }

        cout << '\n';
    }

    return 0;
}