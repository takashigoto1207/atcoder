#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> a(5, 0);
  rep(i, 5) cin >> a[i];
  vector<pair<int, string>> ranking;

  for (int i = 1; i <= 31; i++) {
    string name = "";
    int score = 0;
    rep(j, 5) {
      if (i >> j & 1) {
        score += a[j];
        name += 'A' + j;
      }
    }
    ranking.emplace_back(-score, name);
  }
  sort(ranking.begin(), ranking.end());
  for (auto [score, name] : ranking) cout << name << endl;
  return 0;
}