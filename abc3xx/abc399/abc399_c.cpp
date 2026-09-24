#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int ans = 0;
  dsu uf(N);
  rep(i, M) {
    int u, v;
    cin >> u >> v;
    u--, v--;

    if (uf.same(u, v)) {
      ans++;
      continue;
    }
    uf.merge(u, v);
  }
  cout << ans << endl;
  return 0;
}