#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X;
  cin >> X;

  int ans = 0;
  rep(i, 9) rep(j, 9) if ((i + 1) * (j + 1) != X) ans += (i + 1) * (j + 1);
  cout << ans << endl;
  return 0;
}