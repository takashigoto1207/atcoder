#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, S, T;
  cin >> N >> S >> T;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 0;
  int w = 0;
  rep(i, N) {
    w += A[i];
    if (S <= w && w <= T) ans++;
  }
  cout << ans << endl;
  return 0;
}