#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> S(5);
  rep(i, 5) cin >> S[i];

  int ans = 5;
  rep(i, 5) {
    int cnt = 0;
    rep(j, 5) if (S[i][j] == 'o') cnt++;
    ans = min(ans, 5 - cnt);
  }
  rep(i, 5) {
    int cnt = 0;
    rep(j, 5) if (S[j][i] == 'o') cnt++;
    ans = min(ans, 5 - cnt);
  }
  int cnt = 0;
  rep(i, 5) if (S[i][i] == 'o') cnt++;
  ans = min(ans, 5 - cnt);

  cnt = 0;
  rep(i, 5) if (S[4 - i][i] == 'o') cnt++;
  ans = min(ans, 5 - cnt);

  cout << ans << endl;
  return 0;
}