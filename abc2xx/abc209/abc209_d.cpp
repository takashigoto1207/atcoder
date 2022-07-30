#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

vector<int> dep;
vector<vector<int>> to;

void dfs(int v, int _dep = 0, int p = -1) {
  dep[v] = _dep;
  for (int u : to[v]) {
    if (u == p) continue;
    dfs(u, _dep + 1, v);
  }
}

int main() {
  int N, Q;
  cin >> N >> Q;
  to.resize(N);
  rep(i, N - 1) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  dep.resize(N);
  dfs(0);

  vector<string> ans;
  rep(i, Q) {
    int c, d;
    cin >> c >> d;
    c--, d--;
    if ((dep[c] + dep[d]) % 2 == 0)
      ans.emplace_back("Town");
    else
      ans.emplace_back("Road");
  }
  for (string x : ans) cout << x << endl;
  return 0;
}