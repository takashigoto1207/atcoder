#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<ll> A(N);
  map<ll, ll> mp;
  ll ans = 0;
  rep(i, N) cin >> A[i], mp[A[i]]++, ans += A[i];

  vector<ll> calc;
  for (auto x : mp) calc.push_back(x.first * x.second);
  sort(calc.rbegin(), calc.rend());

  rep(i, min(K, (int)calc.size())) ans -= calc[i];
  cout << ans << endl;
  return 0;
}