#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, D;
  cin >> A >> D;

  cout << max((A + 1) * D, A * (D + 1)) << endl;
  return 0;
}