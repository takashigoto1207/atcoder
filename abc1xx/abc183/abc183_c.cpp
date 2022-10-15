#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  vector<vector<int>> T(N, vector<int>(N));
  rep(i, N) rep(j, N) cin >> T[i][j];

  vector<int> route(N - 1);
  rep(i, N - 1) route[i] = i + 2;

  int ans = 0;
  do {
    ll calc = 0;
    calc += T[0][route[0] - 1];
    for (int i = 1; i < N - 1; i++) calc += T[route[i - 1] - 1][route[i] - 1];
    calc += T[route[N - 2] - 1][0];
    if (calc == K) ans++;
  } while (next_permutation(route.begin(), route.end()));

  cout << ans << endl;
  return 0;
}