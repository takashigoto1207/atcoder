#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> ans(N, 0);
  rep(i, M) ans[i % N]++;

  rep(i, N) cout << ans[i] << endl;
  return 0;
}