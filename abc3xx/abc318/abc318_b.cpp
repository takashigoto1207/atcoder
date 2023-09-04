#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B, C, D, ans = 0;
  vector<vector<int>> s(100, vector<int>(100));
  cin >> N;

  rep(i, N) {
    cin >> A >> B >> C >> D;
    for (int x = A; x < B; x++)
      for (int y = C; y < D; y++) s[x][y] = true;
  }

  rep(x, 100) rep(y, 100) if (s[x][y]) ans++;
  cout << ans << endl;
  return 0;
}