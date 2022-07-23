#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L1, L2, R1, R2;
  cin >> L1 >> R1 >> L2 >> R2;
  cout << max(0, min(R1, R2) - max(L1, L2)) << endl;
  return 0;
}