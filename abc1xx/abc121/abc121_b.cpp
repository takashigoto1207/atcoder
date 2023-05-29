#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> B(M);
  vector<vector<int>> A(N, vector<int>(M));

  rep(i, M) cin >> B[i];
  rep(i, N) rep(j, M) cin >> A[i][j];

  int ans = 0;
  int calc = 0;
  rep(i, N) {
    rep(j, M) calc += A[i][j] * B[j];
    if (calc + C > 0) ans++;
    calc = 0;
  }

  cout << ans << endl;
  return 0;
}