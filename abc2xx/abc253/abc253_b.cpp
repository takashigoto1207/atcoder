#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  vector<pair<int, int>> idx;
  rep(i, H) rep(j, W) if (S[i][j] == 'o') idx.emplace_back(i, j);
  cout << abs(idx[0].first - idx[1].first) + abs(idx[0].second - idx[1].second)
       << endl;
  return 0;
}