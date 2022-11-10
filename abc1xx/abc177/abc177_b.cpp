#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  int ans = T.size();
  rep(i, S.size() - T.size() + 1) {
    int diff = 0;
    rep(j, T.size()) {
      if (T[j] != S[i + j]) diff++;
    }
    ans = min(ans, diff);
  }
  cout << ans << endl;
  return 0;
}