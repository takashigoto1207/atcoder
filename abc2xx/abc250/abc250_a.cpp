#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int H, W, R, C;
  cin >> H >> W >> R >> C;

  int ans = 4;
  if (R == 1 || R == H) ans--;
  if (C == 1 || C == W) ans--;
  if (H == 1) ans--;
  if (W == 1) ans--;
  cout << ans << endl;
  return 0;
}