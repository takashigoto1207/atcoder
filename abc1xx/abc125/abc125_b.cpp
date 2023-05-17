#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> V(N), C(N);
  rep(i, N) cin >> V[i];
  rep(i, N) cin >> C[i];

  int ans = 0;
  rep(i, N) if (V[i] - C[i] > 0) ans += V[i] - C[i];
  cout << ans << endl;
  return 0;
}