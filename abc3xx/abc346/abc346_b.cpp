#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int W, B;
  cin >> W >> B;

  string S = "wbwbwwbwbwbw";
  rep(i, S.size()) {
    int nw = 0, nb = 0;
    rep(j, W + B) {
      if (S[(i + j) % S.size()] == 'w')
        nw++;
      else
        nb++;
    }
    if (W == nw and B == nb) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}