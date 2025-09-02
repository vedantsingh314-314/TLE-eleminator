#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> coins = {1, 3, 6, 10, 15};

    while (t--) {
        int n;
        cin >> n;

        // DP array of size n+1
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0; // base case

        for (int i = 1; i <= n; i++) {
            for (int c : coins) {
                if (i - c >= 0 && dp[i - c] != INT_MAX) {
                    dp[i] = min(dp[i], dp[i - c] + 1);
                }
            }
        }

        cout << dp[n] << endl;
    }
}
