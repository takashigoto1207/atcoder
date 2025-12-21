#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, N;
  cin >> H >> W >> N;

  vector<vector<int>> A(H, vector<int>(W));
  rep(i, H) rep(j, W) cin >> A[i][j];

  vector<int> B(N);
  rep(i, N) cin >> B[i];

  int ans = 0;
  rep(i, H) {
    int cnt = 0;
    rep(j, W) rep(k, N) if (A[i][j] == B[k]) cnt++;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}