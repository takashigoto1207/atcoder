#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  bool ans = true;
  rep(i, H) rep(j, W) {
    if (S[i][j] == '#') {
      int cnt = 0;
      if (0 < i && S[i - 1][j] == '#') cnt++;
      if (i < H - 1 && S[i + 1][j] == '#') cnt++;
      if (0 < j && S[i][j - 1] == '#') cnt++;
      if (j < W - 1 && S[i][j + 1] == '#') cnt++;
      if (cnt != 2 && cnt != 4) ans = false;
    }
  }
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}