#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M), B(M);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    A[i] = --a;
    B[i] = --b;
  }

  dsu d(N);
  vector<int> deg(N);
  rep(i, M) {
    if (d.same(A[i], B[i])) {
      cout << "No" << endl;
      return 0;
    }
    d.merge(A[i], B[i]);
    deg[A[i]]++;
    deg[B[i]]++;
  }

  rep(i, N) {
    if (deg[i] > 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}