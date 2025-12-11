#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> q(N), r(N);
  rep(i, N) cin >> q[i] >> r[i];

  int Q;
  cin >> Q;
  vector<int> t(Q), d(Q);
  rep(i, Q) cin >> t[i] >> d[i];

  rep(i, Q) {
    if (d[i] % q[t[i] - 1] <= r[t[i] - 1])
      cout << d[i] / q[t[i] - 1] * q[t[i] - 1] + r[t[i] - 1] << endl;
    else
      cout << (d[i] / q[t[i] - 1] + 1) * q[t[i] - 1] + r[t[i] - 1] << endl;
  }
  return 0;
}