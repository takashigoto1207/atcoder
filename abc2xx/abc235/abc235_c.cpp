#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  map<int, vector<int>> mp;
  rep(i, N) {
    int a;
    cin >> a;
    mp[a].push_back(i + 1);
  }

  vector<int> ans(Q);
  rep(i, Q) {
    int x, k;
    cin >> x >> k;
    if (mp[x].size() < k)
      ans[i] = -1;
    else
      ans[i] = mp[x][k - 1];
  }

  rep(i, Q) cout << ans[i] << endl;
  return 0;
}