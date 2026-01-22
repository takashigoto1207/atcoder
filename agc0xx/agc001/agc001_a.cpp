#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> L(2 * N);
  rep(i, 2 * N) cin >> L[i];
  sort(L.begin(), L.end());

  int ans = 0;
  rep(i, N) ans += L[2 * i];
  cout << ans << endl;
  return 0;
}