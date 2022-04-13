#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  ll K;
  cin >> N >> K;

  vector<pair<ll, int>> f(N);
  rep(i, N) cin >> f[i].first >> f[i].second;
  sort(f.begin(), f.end());

  int j = 0;
  ll ans = K;
  while (j < N && f[j].first <= ans) {
    ans += f[j].second;
    j++;
  }
  cout << ans << endl;
  return 0;
}