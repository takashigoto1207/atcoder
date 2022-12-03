#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  int ans = 0;
  rep(i, H) {
    string S;
    cin >> S;
    rep(j, W) if (S[j] == '#') ans++;
  }
  cout << ans << endl;
  return 0;
}