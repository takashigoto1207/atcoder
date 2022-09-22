#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  int x = INT_MAX, s = 0;
  rep(i, H * W) {
    int A;
    cin >> A;
    x = min(x, A);
    s += A;
  }

  cout << s - x * H * W << endl;
  return 0;
}