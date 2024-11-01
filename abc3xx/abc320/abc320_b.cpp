#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 1;
  rep(i, (int)S.size()) {
    rep(j, (int)S.size() - i + 1) {
      string T = S.substr(i, j);
      string T_ = T;
      reverse(T.begin(), T.end());
      if (T_ == T) ans = max(ans, j);
    }
  }
  cout << ans << endl;
  return 0;
}