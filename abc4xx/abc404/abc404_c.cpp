#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> deg(N);
  dsu uf(N);
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    deg[A]++, deg[B]++;
    uf.merge(A, B);
  }

  if (deg == vector<int>(N, 2) && uf.size(0) == N)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}