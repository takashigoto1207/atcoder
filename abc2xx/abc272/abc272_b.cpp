#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<bool>> c(N, vector<bool>(N, false));
  rep(i, M) {
    int k;
    cin >> k;
    vector<int> x(k);
    rep(j, k) cin >> x[j];
    for (int s : x)
      for (int t : x) c[s - 1][t - 1] = true;
  }
  rep(i, N) rep(j, N) if (!c[i][j]) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}