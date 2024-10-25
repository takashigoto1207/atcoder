#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N), B(N - 1);
  rep(i, N) cin >> A[i];
  rep(i, N - 1) cin >> B[i];

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  rep(i, N - 1) {
    if (A[i] > B[i]) {
      cout << -1 << endl;
      return 0;
    }
  }
  for (int i = N - 2; i >= 0; i--) {
    if (A[i + 1] > B[i]) {
      cout << A[i + 1] << endl;
      return 0;
    }
  }
  cout << A[0] << endl;
  return 0;
}