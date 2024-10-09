#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> K(N);
  int ans = INT_MAX, sum = 0;
  rep(i, N) cin >> K[i], sum += K[i];

  rep(i, (1 << N)) {
    int calc = 0;
    rep(j, N) {
      if (i & (1 << j)) calc += K[j];
    }
    ans = min(ans, max(calc, sum - calc));
  }
  cout << ans << endl;
  return 0;
}