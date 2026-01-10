#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int D, F;
  cin >> D >> F;

  cout << 7 - (D - F) % 7 << endl;
  return 0;
}