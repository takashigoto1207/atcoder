#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;
  X--, Y--;

  vector<int> ans(N);
  rep(i, N) {
    vector<int> dist(N, INT_MAX);
    queue<int> q;
    auto push = [&](int v, int d) {
      if (dist[v] != INT_MAX) return;
      dist[v] = d;
      q.push(v);
    };
    push(i, 0);
    while (!q.empty()) {
      int v = q.front();
      q.pop();
      int d = dist[v];
      if (v - 1 >= 0) push(v - 1, d + 1);
      if (v + 1 < N) push(v + 1, d + 1);
      if (v == X) push(Y, d + 1);
      if (v == Y) push(X, d + 1);
    }
    rep(i, N) ans[dist[i]]++;
  }

  rep(i, N) ans[i] /= 2;
  for (int i = 1; i <= N - 1; i++) cout << ans[i] << endl;
  return 0;
}