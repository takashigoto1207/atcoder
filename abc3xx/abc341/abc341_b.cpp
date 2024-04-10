#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N), S(N), T(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> S[i] >> T[i];

  rep(i, N - 1) A[i + 1] = A[i + 1] + A[i] / S[i] * T[i];
  cout << A[N - 1] << endl;
  return 0;
}