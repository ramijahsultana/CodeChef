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

    while (t--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> deck(N + 1, 0);

        int card = K;
        bool forward = true;

        while (card > 0)
        {

            if (forward)
            {
                for (int i = 1; i <= N && card > 0; i++)
                {
                    deck[i] += card;
                    card--;
                }
            }
            else
            {
                for (int i = N; i >= 1 && card > 0; i--)
                {
                    deck[i] += card;
                    card--;
                }
            }

            forward = !forward;
        }

        int ans = 0;
        for (int i = 1; i <= N; i++)
        {
            ans = max(ans, deck[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}