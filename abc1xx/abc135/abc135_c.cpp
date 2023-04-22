#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1);
  vector<int> B(N);
  rep(i, N + 1) cin >> A[i];
  rep(i, N) cin >> B[i];

  ll ans = 0;
  rep(i, N) {
    ans += min(A[i], B[i]);
    B[i] = max(B[i] - A[i], 0);
    ans += min(A[i + 1], B[i]);
    A[i + 1] = max(A[i + 1] - B[i], 0);
  }
  cout << ans << endl;
  return 0;
}