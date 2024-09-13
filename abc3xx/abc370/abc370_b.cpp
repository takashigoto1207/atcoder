#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N));
  rep(i, N) rep(j, i + 1) cin >> A[i][j], A[i][j]--;

  int ans = 0;
  rep(i, N) ans = A[max(ans, i)][min(ans, i)];
  ans++;
  cout << ans << endl;
  return 0;
}