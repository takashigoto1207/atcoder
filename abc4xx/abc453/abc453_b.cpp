#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int T, X;
  cin >> T >> X;

  vector<int> A(T + 1);
  rep(i, T + 1) cin >> A[i];

  int mem = 0;
  rep(i, T + 1) {
    if (i == 0)
      cout << i << " " << A[i] << endl;
    else {
      if (abs(A[i] - A[mem]) >= X) {
        mem = i;
        cout << i << " " << A[i] << endl;
      }
    }
  }
  return 0;
}