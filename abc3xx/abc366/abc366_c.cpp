#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q;
  cin >> Q;

  vector<int> ans, ball(1000001);
  int cnt = 0;
  rep(i, Q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      if (ball[x] == 0) cnt++;
      ball[x]++;
    } else if (t == 2) {
      int x;
      cin >> x;
      if (ball[x] == 1) cnt--;
      ball[x]--;
    } else {
      ans.emplace_back(cnt);
    }
  }
  rep(i, ans.size()) cout << ans[i] << endl;
  return 0;
}