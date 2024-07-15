#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1, 0), B(N + 1, 0), C(N + 1, 0);

  rep(i, N) cin >> A[i];
  rep(i, N) {
    int W;
    cin >> W;
    C[A[i]] += W;
    B[A[i]] = max(B[A[i]], W);
  }

  int ans = 0;
  rep(i, N + 1) ans += C[i] - B[i];
  cout << ans << endl;
  return 0;
}