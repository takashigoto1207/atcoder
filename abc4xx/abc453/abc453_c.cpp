#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> L(N);
  rep(i, N) cin >> L[i];

  int ans = 0;
  rep(i, 1 << N) {
    double x = 0.5;
    int cnt = 0;
    rep(j, N) {
      double next_x;
      if ((i >> j) & 1)
        next_x = x + L[j];
      else
        next_x = x - L[j];
      if (x * next_x < 0) cnt++;
      x = next_x;
    }
    ans = max(cnt, ans);
  }
  cout << ans << endl;
  return 0;
}