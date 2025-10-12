#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  ll ans = 1, A;
  ll X = (ll)pow(10, K) - 1;
  rep(i, N) {
    cin >> A;

    if ((X / A) < ans)
      ans = 1;
    else
      ans *= A;
  }
  cout << ans << endl;
  return 0;
}