#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<ll, ll>> vec(N);
  rep(i, N) cin >> vec[i].first >> vec[i].second;
  sort(vec.begin(), vec.end());

  ll ans = 0;
  rep(i, N) {
    if (vec[i].second >= M) {
      cout << ans + M * vec[i].first << endl;
      return 0;
    } else {
      M -= vec[i].second;
      ans += vec[i].first * vec[i].second;
    }
  }
  return 0;
}