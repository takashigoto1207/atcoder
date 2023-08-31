#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, H, X;
  cin >> N >> H >> X;

  vector<int> P(N);
  rep(i, N) cin >> P[i];

  rep(i, N) {
    if (X <= H + P[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}