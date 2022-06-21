#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> H(3), W(3), n(9);
  rep(i, 3) cin >> H[i];
  rep(i, 3) cin >> W[i];

  int ans = 0;
  for (int a = 1; a <= 30; a++) {
    for (int b = 1; b <= 30; b++) {
      for (int d = 1; d <= 30; d++) {
        for (int e = 1; e <= 30; e++) {
          int c = W[0] - a - b;
          int f = W[1] - d - e;
          int g = H[0] - a - d;
          int h = H[1] - b - e;
          int i = W[2] - g - h;
          if (min({c, f, g, h, i}) > 0 && H[2] == c + f + i) ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}