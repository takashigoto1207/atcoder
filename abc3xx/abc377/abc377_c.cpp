#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  set<pair<int, int>> ng;
  vector<pair<int, int>> km{{2, 1},   {1, 2},   {-1, 2}, {-2, 1},
                            {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
  for (int i = 0; i < M; ++i) {
    int x, y;
    cin >> x >> y;
    ng.emplace(x, y);
    for (const auto& [dx, dy] : km)
      if (1 <= x + dx && x + dx <= N && 1 <= y + dy && y + dy <= N)
        ng.emplace(x + dx, y + dy);
  }
  cout << N * N - size(ng) << endl;
  return 0;
}