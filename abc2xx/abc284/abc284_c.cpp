#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  dsu d(N);
  rep(i, M) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    d.merge(u, v);
  }
  cout << d.groups().size() << endl;
  return 0;
}