#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> C(H);
  rep(i, H) cin >> C[i];

  rep(i, W) {
    int ans = 0;
    rep(j, H) if (C[j][i] == '#') ans++;
    cout << ans << " ";
  }
  cout << endl;
  return 0;
}