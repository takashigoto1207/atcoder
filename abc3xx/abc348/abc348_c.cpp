#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, C;
  cin >> N;

  map<int, int> mp;
  rep(i, N) {
    cin >> A >> C;
    if (mp.contains(C))
      mp[C] = min(mp[C], A);
    else
      mp[C] = A;
  }
  int ans = INT_MIN;
  for (auto [C, x] : mp) {
    ans = max(ans, x);
  }
  cout << ans << endl;
}