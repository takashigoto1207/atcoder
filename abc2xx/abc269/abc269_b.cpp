#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> S(10);
  rep(i, 10) cin >> S[i];

  int A = INT_MAX, B = 0, C = INT_MAX, D = 0;
  rep(i, 10) rep(j, 10) {
    if (S[i][j] == '#') {
      A = min(A, i + 1);
      B = max(B, i + 1);
      C = min(C, j + 1);
      D = max(D, j + 1);
    }
  }

  cout << A << " " << B << endl;
  cout << C << " " << D << endl;
  return 0;
}