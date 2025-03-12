#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  string S, ans;
  rep(i, H) {
    rep(j, W) {
      cin >> S;
      if (S == "snuke") {
        ans = (char)('A' + j) + to_string(i + 1);
      }
    }
  }
  cout << ans << endl;
  return 0;
}