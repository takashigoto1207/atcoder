#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X;
  cin >> X;

  rep(i, X / 100 + 1) {
    int calc = X - i * 100;
    if (calc < 0) break;
    if (0 <= calc && calc <= i * 5) {
      cout << 1 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}