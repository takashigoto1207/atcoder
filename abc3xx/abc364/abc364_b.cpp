#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, Si, Sj;
  cin >> H >> W >> Si >> Sj;
  Si--;
  Sj--;

  vector<vector<char>> C(H, vector<char>(W));
  rep(i, H) rep(j, W) cin >> C[i][j];

  string X;
  cin >> X;
  for (char o : X) {
    int ni = Si, nj = Sj;
    if (o == 'L')
      nj--;
    else if (o == 'R')
      nj++;
    else if (o == 'U')
      ni--;
    else
      ni++;

    if (0 <= ni && ni < H && 0 <= nj && nj < W && C[ni][nj] == '.')
      Si = ni, Sj = nj;
  }
  cout << Si + 1 << ' ' << Sj + 1 << endl;
  return 0;
}