#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> D(7);
  vector<int> J(7);
  rep(i, 7) cin >> D[i];
  rep(i, 7) cin >> J[i];

  int ans = 0;
  rep(i, 7) ans += max(D[i], J[i]);
  cout << ans << endl;
  return 0;
}