#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  int ans = INT_MAX;
  rep(i, N) ans = min(ans, A[i] + B[i]);

  int ta = INT_MAX, tb = INT_MAX;
  rep(i, N) rep(j, N) if (i != j) ans = min(ans, max(A[i], B[j]));
  cout << ans << endl;
  return 0;
}