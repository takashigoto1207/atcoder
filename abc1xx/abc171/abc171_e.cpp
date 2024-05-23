#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> a(N);
  rep(i, N) cin >> a[i];

  ll calc = 0;
  rep(i, N) calc ^= a[i];

  rep(i, N) cout << (a[i] ^ calc) << ' ';
  cout << endl;
  return 0;
}