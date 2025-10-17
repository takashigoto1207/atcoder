#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll H, W;
  cin >> H >> W;

  if (H == 1 || W == 1)
    cout << 1 << endl;
  else
    cout << (H * W + 1) / 2 << endl;
  return 0;
}