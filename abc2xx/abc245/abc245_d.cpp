#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N + 1), B(M + 1), C(N + M + 1);
  rep(i, N + 1) cin >> A[i];
  rep(i, N + M + 1) cin >> C[i];
  for (int i = M; 0 <= i; i--) {
    B[i] = C[N + i] / A[N];
    rep(j, N + 1) C[i + j] -= A[j] * B[i];
  }
  rep(i, M + 1) cout << B[i] << " ";
  cout << endl;
  return 0;
}