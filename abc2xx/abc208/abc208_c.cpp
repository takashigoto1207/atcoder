#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  vector<ll> res(N, K / N);
  vector<pair<ll, ll>> a(N);
  rep(i, N) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.begin(), a.end());
  K %= N;
  rep(i, K) res[a[i].second]++;
  rep(i, N) cout << res[i] << endl;
  return 0;
}