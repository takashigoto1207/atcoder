#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L, R;
  cin >> L >> R;

  int l, r;
  map<int, int> lm;
  map<int, int> rm;
  rep(i, L) {
    cin >> l;
    lm[l]++;
  }
  rep(i, R) {
    cin >> r;
    rm[r]++;
  }

  int ans = 0;
  for (auto x : rm) {
    ans += min(x.second, lm[x.first]);
  }
  cout << ans << endl;
  return 0;
}