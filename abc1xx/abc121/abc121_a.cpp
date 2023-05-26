#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, h, w;
  cin >> H >> W >> h >> w;

  cout << (H - h) * (W - w) << endl;
  return 0;
}