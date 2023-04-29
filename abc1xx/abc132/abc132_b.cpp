#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> p(n);
  rep(i, n) cin >> p[i];
  int ans = 0;
  for (int i = 1; i < n - 1; i++) {
    if (p[i] != max({p[i - 1], p[i], p[i + 1]}) &&
        p[i] != min({p[i - 1], p[i], p[i + 1]}))
      ans++;
  }

  cout << ans << endl;
  return 0;
}