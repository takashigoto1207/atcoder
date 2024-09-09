#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  rep(i, N) {
    ll H;
    cin >> H;
    ll calc = H / 5;
    H -= calc * 5;
    ans += calc * 3;
    while (H > 0) {
      ans++;
      if (ans % 3 == 0)
        H -= 3;
      else
        H--;
    }
  }
  cout << ans << endl;
  return 0;
}