#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, M, T;
  cin >> N >> M >> T;

  vector<ll> A(M), B(M);
  rep(i, M) cin >> A[i] >> B[i];

  ll b = N - A[0];
  if (b <= 0) {
    cout << "No" << endl;
    return 0;
  }
  b = min(N, b + (B[0] - A[0]));

  for (int i = 1; i < M; i++) {
    b = b - (A[i] - B[i - 1]);
    if (b <= 0) {
      cout << "No" << endl;
      return 0;
    }
    b = min(N, b + (B[i] - A[i]));
  }

  if (b - (T - B[M - 1]) <= 0) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}