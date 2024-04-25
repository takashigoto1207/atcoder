#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n, X;
  cin >> n >> X;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0, cnt = 0;
  while (X) {
    if (X % 2 == 1) ans += a[cnt];
    X /= 2;
    cnt++;
  }
  cout << ans << endl;
  return 0;
}