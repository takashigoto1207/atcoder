#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> a(N), b(N);
  rep(i, N) cin >> a[i];
  rep(i, N) cin >> b[i];

  ll ma = 0, mx = 0;
  rep(i, N) {
    ma = max(ma, a[i]);
    mx = max(mx, ma * b[i]);
    cout << mx << endl;
  }
  return 0;
}