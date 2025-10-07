#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  ll ans = 0;
  rep(i, M + 1) {
    ans += pow(N, i);
    if (pow(10, 9) < ans) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}