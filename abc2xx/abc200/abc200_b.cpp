#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  ll ans = N;
  rep(i, K) {
    if (ans % 200 == 0)
      ans /= 200;
    else
      ans = ans * 1000 + 200;
  }
  cout << ans << endl;
  return 0;
}