#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, L, Q;

  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  cin >> M;
  vector<int> B(M);
  rep(i, M) cin >> B[i];

  cin >> L;
  vector<int> C(L);
  rep(i, L) cin >> C[i];

  cin >> Q;
  vector<int> X(Q);
  rep(i, Q) cin >> X[i];

  vector<bool> q(300000001, false);
  rep(i, N) rep(j, M) rep(k, L) q[A[i] + B[j] + C[k]] = true;

  rep(i, Q) {
    if (q[X[i]])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}