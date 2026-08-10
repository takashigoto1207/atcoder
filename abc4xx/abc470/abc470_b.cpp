#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<int, int> mp;
  rep(i, N) {
    int C;
    cin >> C;
    mp[C]++;
  }

  int ans = INT_MAX;
  for (auto x : mp) ans = min(ans, N - x.second);

  cout << ans << endl;
  return 0;
}