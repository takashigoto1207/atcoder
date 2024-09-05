#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  string name, kit;
  cin >> N >> M >> name >> kit;

  map<char, int> store, kt;
  rep(i, N) store[name[i]]++;
  rep(i, M) kt[kit[i]]++;

  int ans = INT_MIN;
  for (auto x : store) {
    if (kt[x.first] == 0) {
      cout << -1 << endl;
      return 0;
    }
    ans = max(ans, x.second / kt[x.first] + min(1, x.second % kt[x.first]));
  }
  cout << ans << endl;
  return 0;
}