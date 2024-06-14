#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll H;
  cin >> H;

  ll ans = 1;
  while (ans <= H) ans *= 2;
  cout << ans - 1 << endl;
  return 0;
}