#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

using mint = modint1000000007;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> to(N);
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    to[A].push_back(B);
    to[B].push_back(A);
  }

  vector<int> dist(N, INT_MAX), vs;
  queue<int> q;
  q.push(0), dist[0] = 0;
  while (q.size()) {
    int v = q.front();
    q.pop();
    vs.push_back(v);
    for (int u : to[v]) {
      if (dist[u] != INT_MAX) continue;
      dist[u] = dist[v] + 1;
      q.push(u);
    }
  }

  vector<mint> dp(N);
  dp[0] = 1;
  for (int x : vs) {
    for (int y : to[x]) {
      if (dist[y] == dist[x] + 1) dp[y] += dp[x];
    }
  }
  cout << dp[N - 1].val() << endl;
  return 0;
}