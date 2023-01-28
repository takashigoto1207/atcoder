#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, P, Q, R, S;
  cin >> N >> P >> Q >> R >> S;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  for (int i = P; i <= Q; i++) swap(A[i - 1], A[R - P + i - 1]);
  rep(i, N) cout << A[i] << " ";
  cout << endl;
  return 0;
}