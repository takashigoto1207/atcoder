#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<unsigned long long> A(64);
  rep(i, 64) cin >> A[i];

  unsigned long long ans = 0, c = 1;
  rep(i, 64) ans += c * A[i], c *= 2;
  cout << ans << endl;
  return 0;
}