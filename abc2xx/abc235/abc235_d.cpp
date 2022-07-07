#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, N;
  cin >> a >> N;

  vector<int> dist(1000000, INT_MAX);
  queue<int> q;

  auto push = [&](int v, int d) {
    if (dist[v] != INT_MAX) return;
    dist[v] = d;
    q.push(v);
  };

  push(1, 0);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    int d = dist[v];
    if (ll(v) * a < 1000000) push(v * a, d + 1);
    if (v >= 10 && v % 10 != 0) {
      string s = to_string(v);
      rotate(s.begin(), s.begin() + (s.size() - 1), s.end());
      push(stoi(s), d + 1);
    }
  }

  if (dist[N] == INT_MAX)
    cout << -1 << endl;
  else
    cout << dist[N] << endl;
  return 0;
}