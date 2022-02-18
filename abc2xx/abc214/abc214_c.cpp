#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> S(N), T(N);
  rep(i, N) cin >> S[i];
  rep(i, N) cin >> T[i];

  rep(i, 2 * N) T[(i + 1) % N] = min(T[(i + 1) % N], T[i % N] + S[i % N]);
  rep(i, N) cout << T[i] << endl;
  return 0;
}