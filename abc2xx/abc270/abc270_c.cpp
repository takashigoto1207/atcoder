#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;

  vector<vector<int>> to(N + 1);
  rep(i, N - 1) {
    int a, b;
    cin >> a >> b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> ans;
  auto dfs = [&](auto f, int v, int p = -1) -> bool {
    if (v == X) {
      ans.push_back(v);
      return true;
    }
    for (int u : to[v]) {
      if (u == p) continue;
      if (f(f, u, v)) {
        ans.push_back(v);
        return true;
      }
    }
    return false;
  };

  dfs(dfs, Y);
  for (int a : ans) cout << a << " ";
  cout << endl;
  return 0;
}