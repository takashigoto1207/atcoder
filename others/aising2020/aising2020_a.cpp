#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L, R, d;
  cin >> L >> R >> d;

  cout << R / d - (L - 1) / d << endl;
  return 0;
}