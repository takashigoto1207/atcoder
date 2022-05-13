#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  const ll M = 1e6;
  vector<bool> isPrime(M + 1, true);
  vector<ll> primes;
  isPrime[0] = isPrime[1] = false;
  for (ll i = 2; i <= M; i++) {
    if (!isPrime[i]) continue;
    primes.push_back(i);
    for (ll j = i * i; j <= M; j += i) isPrime[j] = false;
  }

  vector<int> s(M + 1, 0);
  for (ll x : primes) s[x] = 1;
  rep(i, M) s[i + 1] += s[i];

  ll N;
  cin >> N;
  ll ans = 0;
  for (ll x : primes) {
    ll r = min(N / (x * x * x), x - 1);
    ans += s[r];
  }
  cout << ans << endl;
  return 0;
}