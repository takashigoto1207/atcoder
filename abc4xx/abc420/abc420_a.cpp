#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y;
  cin >> X >> Y;

  cout << (X + Y - 1) % 12 + 1 << endl;
  return 0;
}