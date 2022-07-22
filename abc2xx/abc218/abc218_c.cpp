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

  auto rot = [&](vector<string> a) {
    vector<string> res(N, string(N, '.'));
    rep(i, N) rep(j, N) res[j][N - 1 - i] = a[i][j];
    return res;
  };

  auto normalize = [&](vector<string> a) {
    int li = N, lj = N;
    rep(i, N) rep(j, N) if (a[i][j] == '#') {
      li = min(li, i);
      lj = min(lj, j);
    }
    vector<string> res(N, string(N, '.'));
    rep(i, N) rep(j, N) if (a[i][j] == '#') { res[i - li][j - lj] = '#'; }
    return res;
  };
  auto same = [&](vector<string> a, vector<string> b) {
    return normalize(a) == normalize(b);
  };

  rep(i, 4) {
    if (same(S, T)) {
      cout << "Yes" << endl;
      return 0;
    }
    T = rot(T);
  }
  cout << "No" << endl;
  return 0;
}