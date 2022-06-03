#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<int, int> mp;
  rep(i, N) {
    int A;
    cin >> A;
    mp[A]++;
  }

  vector<int> cnt;
  for (auto x : mp) cnt.push_back(x.second);

  ll dp[200001][4];
  dp[0][0] = 1;
  rep(i, cnt.size()) rep(j, 4) {
    dp[i + 1][j] = dp[i][j];
    if (j) dp[i + 1][j] += dp[i][j - 1] * cnt[i];
  }

  cout << dp[cnt.size()][3] << endl;
  return 0;
}