#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, C;
  cin >> N >> C;

  vector<int> T(N);
  rep(i, N) cin >> T[i];

  int ans = 0, last = 0;
  rep(i, N) if (i == 0 || T[i] - last >= C) last = T[i], ans++;
  cout << ans << endl;
  return 0;
}