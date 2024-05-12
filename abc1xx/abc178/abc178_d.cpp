#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const ll mod = 1000000007;

int main() {
  int S;
  cin >> S;

  vector<ll> dp(S + 1);
  dp[1] = 0;
  dp[2] = 0;
  for (int i = 3; i <= S; i++) {
    dp[i] = 1;
    rep(j, i - 2) dp[i] = (dp[i] + dp[j]) % mod;
  }
  cout << dp[S] << endl;
  return 0;
}