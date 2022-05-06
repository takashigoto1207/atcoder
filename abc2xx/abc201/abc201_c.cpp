#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  rep(i, 10000) {
    vector<int> a(10);
    int x = i;
    rep(i, 4) {
      int d = x % 10;
      a[d] = 1;
      x /= 10;
    }
    bool ok = true;
    rep(i, 10) {
      if (S[i] == 'o' && a[i] != 1) ok = false;
      if (S[i] == 'x' && a[i] != 0) ok = false;
    }
    if (ok) ans++;
  }
  cout << ans << endl;
  return 0;
}