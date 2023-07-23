#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int ans = 0, cnt = 0;
  rep(i, D) {
    bool flg = true;
    rep(j, N) if (S[j][i] == 'x') flg = false;
    if (flg)
      cnt++;
    else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  cout << max(ans, cnt) << endl;
  return 0;
}