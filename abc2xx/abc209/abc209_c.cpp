#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> C(N);

  rep(i, N) cin >> C[i];
  sort(C.begin(), C.end());

  ll ans = 1;
  rep(i, N) ans = ans * max(0, C[i] - i) % 1000000007;
  cout << ans << endl;
  return 0;
}