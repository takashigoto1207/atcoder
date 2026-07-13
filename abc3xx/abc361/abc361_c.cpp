#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());

  int ans = INT_MAX;
  rep(i, K + 1) ans = min(ans, A[i + N - K - 1] - A[i]);
  cout << ans << endl;
  return 0;
}