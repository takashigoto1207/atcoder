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
  map<ll, ll> mp;
  rep(i, N) {
    cin >> A[i];
    mp[A[i]]++;
  }

  ll ans = 0;
  for (auto x : mp) ans += x.second * (x.second - 1) / 2;

  rep(i, N) cout << max((ll)0, ans - mp[A[i]] + 1) << endl;
  return 0;
}