#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;

  vector<int> T(N);
  rep(i, N) cin >> T[i];

  int ans = 0;
  rep(i, N - 1) if (T[i + 1] - T[i] <= D) {
    cout << T[i + 1] << endl;
    return 0;
  }
  cout << -1 << endl;
  return 0;
}