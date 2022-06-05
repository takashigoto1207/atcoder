#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  ll K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<ll> s(N + 1, 0);
  rep(i, N) s[i + 1] = s[i] + A[i];

  map<ll, int> mp;
  ll ans = 0;
  for (int i = 1; i <= N; i++) {
    mp[s[i - 1]]++;
    ans += mp[s[i] - K];
  }
  cout << ans << endl;
  return 0;
}