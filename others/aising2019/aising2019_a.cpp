#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, H, W;
  cin >> N >> H >> W;

  cout << (N + 1 - H) * (N + 1 - W) << endl;
  return 0;
}