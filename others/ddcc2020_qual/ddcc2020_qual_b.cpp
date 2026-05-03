#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N), sumA(N);
  rep(i, N) {
    cin >> A[i];
    if (i == 0)
      sumA[i] = A[i];
    else
      sumA[i] = sumA[i - 1] + A[i];
  }

  ll ans = LLONG_MAX;
  rep(i, N) ans = min(ans, abs(sumA[N - 1] - 2 * sumA[i]));
  cout << ans << endl;
  return 0;
}