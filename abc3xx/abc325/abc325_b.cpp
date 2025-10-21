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
    int W, X;
    cin >> W >> X;
    mp[X] += W;
  }

  int ans = 0;
  rep(i, 24) {
    int calc = 0;
    rep(j, 9) calc += mp[(i + j) % 24];
    ans = max(ans, calc);
  }

  cout << ans << endl;
  return 0;
}