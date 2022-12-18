#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int ans = 0;
  rep(i, N) for (int j = i + 1; j < N; j++) {
    bool f = true;
    rep(k, M) if (S[i][k] != 'o' && S[j][k] != 'o') {
      f = false;
      break;
    }
    if (f) ans++;
  }
  cout << ans << endl;
  return 0;
}