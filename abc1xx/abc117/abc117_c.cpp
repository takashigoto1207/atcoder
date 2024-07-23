#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> X(M);
  rep(i, M) cin >> X[i];
  sort(X.begin(), X.end());

  if (N > M) {
    cout << 0 << endl;
    return 0;
  }

  vector<int> d(M - 1);
  rep(i, M - 1) d[i] = X[i + 1] - X[i];
  sort(d.begin(), d.end());
  rep(i, N - 1) d.pop_back();

  int ans = 0;
  rep(i, d.size()) ans += d[i];
  cout << ans << endl;
  return 0;
}