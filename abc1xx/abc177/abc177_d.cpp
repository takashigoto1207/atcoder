#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

struct UnionFind {
  vector<int> par;

  UnionFind(int N) : par(N) {
    for (int i = 0; i < N; i++) par[i] = i;
  }

  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry) return;
    par[rx] = ry;
  }

  bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M), B(M);
  rep(i, M) cin >> A[i] >> B[i];

  UnionFind uf(N);
  rep(i, M) uf.unite(A[i] - 1, B[i] - 1);

  map<int, int> mp;
  rep(i, N) mp[uf.root(i)]++;

  int ans = 0;
  for (auto x : mp) ans = max(ans, x.second);
  cout << ans << endl;
  return 0;
}