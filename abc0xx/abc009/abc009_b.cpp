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
  rep(i, N) cin >> A[i];

  int m = INT_MIN;
  rep(i, N) m = max(m, A[i]);
  sort(A.rbegin(), A.rend());

  rep(i, N) {
    if (A[i] != m) {
      cout << A[i] << endl;
      return 0;
    }
  }
  return 0;
}