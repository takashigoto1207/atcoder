#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 0, time = 0;
  rep(i, N) {
    int T, V;
    cin >> T >> V;
    ans -= (T - time);
    ans = max(ans, 0);
    ans += V;
    time = T;
  }
  cout << ans << endl;
  return 0;
}