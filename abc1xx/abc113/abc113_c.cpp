#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> p(M), y(M), s(M);
  vector<vector<pair<int, int>>> v(N + 1);

  rep(i, M) {
    cin >> p[i] >> y[i];
    v[p[i]].push_back(pair<int, int>(y[i], i));
  }

  for (int i = 1; i <= N; i++) {
    sort(v[i].begin(), v[i].end());
    for (int j = 0; j < (int)v[i].size(); j++) {
      s[v[i][j].second] = j + 1;
    }
  }

  rep(i, M) {
    cout << setfill('0') << right << setw(6) << p[i];
    cout << setfill('0') << right << setw(6) << s[i] << endl;
  }
  return 0;
}