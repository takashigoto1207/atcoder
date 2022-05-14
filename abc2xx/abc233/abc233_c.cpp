#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int N, ans;
ll X;
vector<vector<int>> a;
void dfs(int i, ll s) {
  if (i == N) {
    if (s == X) ans++;
    return;
  }

  rep(j, a[i].size()) {
    if (s > X / a[i][j]) continue;
    dfs(i + 1, s * a[i][j]);
  }
}

int main() {
  cin >> N >> X;
  a = vector<vector<int>>(N);
  rep(i, N) {
    int L;
    cin >> L;
    a[i] = vector<int>(L);
    rep(j, L) cin >> a[i][j];
  }
  dfs(0, 1);
  cout << ans << endl;
  return 0;
}