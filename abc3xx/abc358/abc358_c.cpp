#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);

  rep(i, N) cin >> S[i];

  int ans = N;
  rep(bit, (1 << N)) {
    vector<bool> exist(M);
    int cnt = 0;
    rep(i, N) {
      if (bit >> i & 1) {
        cnt++;
        rep(j, M) if (S[i][j] == 'o') exist[j] = true;
      }
    }

    bool all_exist = true;
    rep(j, M) if (!exist[j]) all_exist = false;
    if (all_exist) ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}