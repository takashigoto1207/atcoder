#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll X, Y;
  cin >> X >> Y;

  int ans = 0;
  while (X <= Y) {
    ans++;
    X *= 2;
  }
  cout << ans << endl;
  return 0;
}