#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, A, B;
  cin >> N >> M >> A >> B;

  vector<int> c(M);
  rep(i, M) cin >> c[i];

  rep(i, M) {
    if (N <= A) N += B;
    if (N < c[i]) {
      cout << i + 1 << endl;
      return 0;
    }
    N -= c[i];
  }
  cout << "complete" << endl;
  return 0;
}