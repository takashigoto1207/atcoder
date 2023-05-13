#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int l, r;
  int max_l = INT_MIN;
  int min_r = INT_MAX;

  rep(i, M) {
    cin >> l >> r;
    max_l = max(max_l, l);
    min_r = min(min_r, r);
  }

  if (max_l > min_r) {
    cout << 0 << endl;
    return 0;
  }
  cout << min_r - max_l + 1 << endl;
  return 0;
}