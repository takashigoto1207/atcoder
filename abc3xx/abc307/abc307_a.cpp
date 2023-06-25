#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(7 * N);
  rep(i, 7 * N) cin >> A[i];

  int ans = 0;
  rep(i, N) {
    rep(j, 7) ans += A[i * 7 + j];
    cout << ans << " ";
    ans = 0;
  }
  cout << endl;
  return 0;
}