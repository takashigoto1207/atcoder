#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> L(Q);
  vector<int> R(Q);
  vector<int> T(Q);
  rep(i, Q) cin >> L[i] >> R[i] >> T[i];

  vector<int> A(N);
  rep(i, Q) for (int j = L[i] - 1; j < R[i]; j++) A[j] = T[i];
  rep(i, N) cout << A[i] << endl;
  return 0;
}