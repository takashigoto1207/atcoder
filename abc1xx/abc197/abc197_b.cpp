#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  int ans = 0;
  if (S[X - 1][Y - 1] == '.') ans++;
  for (int i = X - 2; 0 <= i; i--) {
    if (S[i][Y - 1] == '.')
      ans++;
    else
      break;
  }
  for (int i = X; i < H; i++) {
    if (S[i][Y - 1] == '.')
      ans++;
    else
      break;
  }
  for (int i = Y - 2; 0 <= i; i--) {
    if (S[X - 1][i] == '.')
      ans++;
    else
      break;
  }
  for (int i = Y; i < W; i++) {
    if (S[X - 1][i] == '.')
      ans++;
    else
      break;
  }
  cout << ans << endl;
  return 0;
}