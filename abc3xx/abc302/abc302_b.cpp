#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  string T = "snuke";
  rep(si, H) rep(sj, W) {
    rep(v, 8) {
      int i = si, j = sj;
      rep(k, 5) {
        if (i < 0 || j < 0 || i >= H || j >= W) break;
        if (S[i][j] != T[k]) break;
        if (k == 4) {
          i = si;
          j = sj;
          rep(nk, 5) {
            printf("%d %d\n", i + 1, j + 1);
            i += di[v];
            j += dj[v];
          }
          return 0;
        }
        i += di[v];
        j += dj[v];
      }
    }
  }
  return 0;
}