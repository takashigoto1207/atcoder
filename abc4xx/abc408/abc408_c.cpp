#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> wall(N + 1, 0);

  rep(i, M) {
    int L, R;
    cin >> L >> R;
    L--;
    wall[L]++, wall[R]--;
  }

  rep(i, N) wall[i + 1] += wall[i];

  int ans = INT_MAX;
  rep(i, N) ans = min(ans, wall[i]);
  cout << ans << endl;
  return 0;
}