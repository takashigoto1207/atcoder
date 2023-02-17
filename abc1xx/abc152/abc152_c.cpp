#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> P(N);
  rep(i, N) cin >> P[i];

  int mp = INT_MAX;
  int ans = 0;
  rep(i, N) {
    mp = min(mp, P[i]);
    if (P[i] <= mp) ans++;
  }
  cout << ans << endl;
  return 0;
}