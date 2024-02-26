#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  rep(i, n) {
    while (a[i] % 2 == 0 || a[i] % 3 == 2) {
      a[i]--;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}