#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> x(N);
  rep(i, N) cin >> x[i];

  int ans = 0;
  rep(i, N) {
    rep(j, 9) {
      if (x[i][j] == 'x') ans++;
      if (x[i][j] == 'o') {
        if (i == 0 || x[i - 1][j] != 'o') ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}