#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<int>()); 
        
        for (int i = 0; i < n && k > 0; i++) {
            if (a[i] > x) {
                a[i] = 0;
                x += 100;
                k--;
            }
        }

        int rank = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] > x)
                rank++;
        }

        cout << rank << "\n";
    }

    return 0;
}
