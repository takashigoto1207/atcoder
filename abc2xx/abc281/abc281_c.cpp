#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, T;
  cin >> N >> T;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll r = 0;
  rep(i, N) r += A[i];
  T %= r;

  rep(i, N) {
    if (T < A[i]) {
      cout << i + 1 << " " << T << endl;
      return 0;
    } else
      T -= A[i];
  }
  return 0;
}