#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    vector<long long> dp(x + 1, 0);
    dp[0] = 1;

    // Coin combinations II → order does NOT matter
    for (int c : coins) {
        for (int sum = c; sum <= x; sum++) {
            dp[sum] = (dp[sum] + dp[sum - c]) % MOD;
        }
    }

    cout << dp[x];
    return 0;
}
