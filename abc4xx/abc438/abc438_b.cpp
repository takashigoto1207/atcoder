#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  int ans = INT_MAX;
  rep(i, N - M + 1) {
    int cnt = 0;
    rep(j, M) cnt += ((S[i + j] - '0') - (T[j] - '0') + 10) % 10;
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}