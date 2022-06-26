#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;

  vector<int> A(K), L(Q);
  rep(i, K) cin >> A[i];
  rep(i, Q) cin >> L[i];
  sort(A.begin(), A.end());
  rep(i, Q) {
    if (A[L[i] - 1] == N) continue;
    if (A[L[i] - 1] + 1 != A[L[i]]) A[L[i] - 1]++;
  }

  rep(i, K) cout << A[i] << " ";
  cout << endl;
  return 0;
}