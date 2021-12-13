#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> A(N), x(Q);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());
  rep(i, Q) cin >> x[i];

  rep(i, Q) cout << A.end() - lower_bound(A.begin(), A.end(), x[i]) << endl;
  return 0;
}