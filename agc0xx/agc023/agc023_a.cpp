#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll sum = 0;
  map<ll, ll> mp;
  mp[0] = 1;
  rep(i, N) {
    sum += A[i];
    mp[sum]++;
  }

  ll ans = 0;
  for (auto x : mp) ans += (x.second - 1) * x.second / 2;
  cout << ans << endl;
  return 0;
}