#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  string S, ds[2];
  cin >> N >> S >> Q;

  int T, A, B;
  ds[0] = S.substr(0, N);
  ds[1] = S.substr(N);
  rep(i, Q) {
    cin >> T >> A >> B;
    if (T == 1)
      swap(ds[(A - 1) / N][(A - 1) % N], ds[(B - 1) / N][(B - 1) % N]);
    else
      swap(ds[0], ds[1]);
  }
  cout << ds[0] << ds[1];
  return 0;
}