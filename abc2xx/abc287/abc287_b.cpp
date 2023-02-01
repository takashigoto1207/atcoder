#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> S(N), T(M);
  rep(i, N) cin >> S[i], S[i] %= 1000;
  rep(i, M) cin >> T[i];

  int ans = 0;
  rep(i, N) {
    rep(j, M) {
      if (S[i] == T[j]) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}