#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> G(H);
  rep(i, H) cin >> G[i];

  vector vis(H, vector<int>(W, false));
  int i = 0, j = 0;
  while (true) {
    if (vis[i][j] == true) {
      cout << -1 << endl;
      exit(0);
    }
    vis[i][j] = true;
    if (G[i][j] == 'U' && i != 0) {
      i--;
    } else if (G[i][j] == 'D' && i != H - 1) {
      i++;
    } else if (G[i][j] == 'L' && j != 0) {
      j--;
    } else if (G[i][j] == 'R' && j != W - 1) {
      j++;
    } else {
      break;
    }
  }
  cout << i + 1 << " " << j + 1 << endl;
}