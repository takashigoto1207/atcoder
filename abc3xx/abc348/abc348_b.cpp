#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];

  rep(i, N) {
    int max_dist = 0, idx = -1;
    rep(j, N) {
      int dist = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
      if (max_dist < dist) max_dist = dist, idx = j;
    }
    cout << idx + 1 << endl;
  }
  return 0;
}