#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;

  vector<int> X(N), Y(N);
  rep(i, N) cin >> X[i] >> Y[i];

  dsu uf(N);
  rep(i, N) for (int j = i + 1; j < N; j++) {
    if ((X[j] - X[i]) * (X[j] - X[i]) + (Y[j] - Y[i]) * (Y[j] - Y[i]) <= D * D)
      uf.merge(i, j);
  }

  rep(i, N) {
    if (uf.same(0, i))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}