#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, T, X, D;
  cin >> N >> M >> X >> T >> D;

  cout << T - X * D + min(M, X) * D << endl;
  return 0;
}