#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll X, calc = 1, ans = 1;
  cin >> X;
  while (X != calc) ans++, calc *= ans;
  cout << ans << endl;
  return 0;
}