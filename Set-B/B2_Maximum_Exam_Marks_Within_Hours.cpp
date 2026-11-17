#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, H;
    cin >> n >> H;

    vector<int> t(n), m(n);
    for (int &x : t) cin >> x;
    for (int &x : m) cin >> x;

    vector<int> dp(H + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int hours = H; hours >= t[i]; hours--) {
            dp[hours] = max(dp[hours], dp[hours - t[i]] + m[i]);
        }
    }

    cout << dp[H] << '\n';
    return 0;
}
