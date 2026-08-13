#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int T;
  cin >> T;

  vector<string> ans(T);
  rep(i, T) {
    ll K;
    cin >> K;
    for (int j = 1; j <= 100; j++) {
      string s = to_string(K * j);
      if (s.find("00") != string::npos) {
        ans[i] = s;
        break;
      }
    }
  }

  rep(i, T) cout << ans[i] << endl;
  return 0;
}