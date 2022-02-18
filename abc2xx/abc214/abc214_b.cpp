#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int S, T;
  cin >> S >> T;

  int ans = 0;
  rep(i, S + 1) rep(j, S + 1 - i) rep(k, S + 1 - i - j) if (i * j * k <= T)
      ans++;

  cout << ans << endl;
  return 0;
}