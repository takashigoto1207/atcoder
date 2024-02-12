#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> s(3);
  vector<int> e(3);
  rep(i, 3) {
    cin >> s[i];
    cin >> e[i];
  }

  int ans = 0;
  rep(i, 3) ans += s[i] * e[i];
  cout << ans / 10 << endl;
  return 0;
}