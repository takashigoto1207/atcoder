#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, Q;
  cin >> H >> W >> Q;

  vector<int> ans;
  rep(i, Q) {
    int x, y;
    cin >> x >> y;
    if (x == 1) {
      ans.push_back(y * W);
      H -= y;
    } else {
      ans.push_back(y * H);
      W -= y;
    }
  }
  rep(i, Q) cout << ans[i] << endl;
  return 0;
}