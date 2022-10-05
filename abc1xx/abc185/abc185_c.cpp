#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L;
  cin >> L;

  ll ans = 1;
  for (int i = 1; i <= 11; i++) {
    ans *= L - i;
    ans /= i;
  }
  cout << ans << endl;
  return 0;
}