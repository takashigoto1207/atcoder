#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> V(N), P(N);
  rep(i, N) cin >> V[i] >> P[i];

  ll calc = 0;
  rep(i, N) {
    calc += V[i] * P[i];
    if (X * 100 < calc) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}