#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L, H, N;
  cin >> L >> H >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N) {
    if (A[i] <= L)
      cout << L - A[i] << endl;
    else if (A[i] <= H)
      cout << 0 << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}