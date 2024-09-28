#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> ans(6);
  rep(i, N) {
    double M, m;
    cin >> M >> m;
    if (M >= 35) ans[0]++;
    if (M >= 30 && M < 35) ans[1]++;
    if (M >= 25 && M < 30) ans[2]++;
    if (m >= 25) ans[3]++;
    if (M >= 0 && m < 0) ans[4]++;
    if (M < 0) ans[5]++;
  }
  rep(i, 5) cout << ans[i] << ' ';
  cout << ans[5] << endl;
  return 0;
}