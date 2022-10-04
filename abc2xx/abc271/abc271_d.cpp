#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, S;
  cin >> N >> S;

  vector<int> a(N), b(N);
  rep(i, N) cin >> a[i] >> b[i];

  vector dp(N + 1, vector<bool>(S + 1, false));
  dp[0][0] = true;

  rep(i, N) {
    rep(j, S + 1) {
      if (dp[i][j]) {
        if (j + a[i] <= S) dp[i + 1][j + a[i]] = true;
        if (j + b[i] <= S) dp[i + 1][j + b[i]] = true;
      }
    }
  }

  if (!dp[N][S]) {
    cout << "No" << endl;
    return 0;
  }

  string ans;
  for (int i = N - 1; i >= 0; i--) {
    if (S - a[i] >= 0 && dp[i][S - a[i]]) {
      S -= a[i];
      ans += 'H';
    } else {
      S -= b[i];
      ans += 'T';
    }
  }
  reverse(ans.begin(), ans.end());
  cout << "Yes" << endl;
  cout << ans << endl;
  return 0;
}