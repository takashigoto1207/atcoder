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

  int x = A[0] + 1;
  for (int i = 1; i < N; i++) {
    if (i + 1 < x) {
      x = max(x, i + 1 + A[i]);
    } else {
      cout << i << endl;
      return 0;
    }
  }
  cout << N << endl;
  return 0;
}