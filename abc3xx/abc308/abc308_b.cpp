#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> C(N), D(M);
  vector<int> P(M + 1);
  map<string, int> mp;
  rep(i, N) cin >> C[i];
  rep(i, M) cin >> D[i];
  rep(i, M + 1) cin >> P[i];
  rep(i, M) mp[D[i]] = P[i + 1];

  int ans = 0;
  rep(i, N) {
    int price = mp[C[i]];
    if (price == 0) price = P[0];
    ans += price;
  }
  cout << ans << endl;
  return 0;
}