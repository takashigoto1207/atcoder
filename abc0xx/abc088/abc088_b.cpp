#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];
  sort(a.rbegin(), a.rend());

  int ans = 0;
  rep(i, N) {
    if (i % 2 == 0)
      ans += a[i];
    else
      ans -= a[i];
  }
  cout << ans << endl;
  return 0;
}