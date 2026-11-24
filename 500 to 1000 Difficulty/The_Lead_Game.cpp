#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cum_score1 = 0;
    int cum_score2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; i++) {
        int s, t;
        cin >> s >> t;

       
        cum_score1 += s;
        cum_score2 += t;

       
        int current_lead = 0;
        int current_leader = 0;

        if (cum_score1 > cum_score2) {
            current_lead = cum_score1 - cum_score2;
            current_leader = 1;
        } else {
            current_lead = cum_score2 - cum_score1;
            current_leader = 2;
        }

     
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    
    cout << winner << " " << max_lead << "\n";

    return 0;
}