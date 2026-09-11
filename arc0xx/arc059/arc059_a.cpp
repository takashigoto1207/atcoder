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

  int ans = INT_MAX;
  for (int i = -100; i <= 100; i++) {
    int sum = 0;
    rep(j, N) sum += (a[j] - i) * (a[j] - i);
    ans = min(ans, sum);
  }
  cout << ans << endl;
  return 0;
}