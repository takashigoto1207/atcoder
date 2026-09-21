#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

const int di[4] = {-1, 0, 1, 0};
const int dj[4] = {0, 1, 0, -1};

int main() {
  int H, W, N;
  cin >> H >> W >> N;

  vector<string> S(H, string(W, '.'));
  int i = 0, j = 0, v = 0;
  rep(k, N) {
    if (S[i][j] == '.') {
      S[i][j] = '#';
      v += 1;
    } else {
      S[i][j] = '.';
      v += 3;
    }
    v %= 4;
    i += di[v], j += dj[v];
    i = (i + H) % H, j = (j + W) % W;
  }
  rep(i, H) cout << S[i] << endl;
  return 0;
}