#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K, G, M;
  cin >> K >> G >> M;

  int x = 0, y = 0;
  rep(i, K) {
    if (x == G)
      x = 0;
    else if (y == 0)
      y = M;
    else {
      int p = min(G - x, y);
      x += p, y -= p;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}