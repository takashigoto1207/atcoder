#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N), T(N);
  rep(i, N) cin >> S[i];
  rep(i, N) cin >> T[i];

  int ans = INT_MAX;
  rep(i, 4) {
    int cnt = i;
    rep(j, N) rep(k, N) if (S[j][k] != T[j][k]) cnt++;
    ans = min(ans, cnt);

    vector<string> rS = S;
    rep(j, N) rep(k, N) rS[k][N - j - 1] = S[j][k];
    S = rS;
  }
  cout << ans << endl;
  return 0;
}