#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N - 1);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  rep(i, N - 1) cin >> C[i];

  int ans = 0;
  rep(i, N) {
    ans += B[A[i] - 1];
    if (i < N - 1 && A[i] + 1 == A[i + 1]) ans += C[A[i] - 1];
  }
  cout << ans << endl;
  return 0;
}