#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X, T;
  cin >> N >> X >> T;
  cout << ((N - 1) / X + 1) * T << endl;
  return 0;
}