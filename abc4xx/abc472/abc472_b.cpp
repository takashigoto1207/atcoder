#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  rep(i, N) cin >> L[i];

  int calc = 0, ans = INT_MAX, l = 0;
  rep(i, N) l += L[i];
  rep(i, N) calc += L[i], ans = min(ans, abs(l - 2 * calc));
  cout << ans << endl;
  return 0;
}