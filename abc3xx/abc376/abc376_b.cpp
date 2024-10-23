#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int move(int n, int from, int to, int ng) {
  if (from > to) swap(from, to);
  if (from < ng and ng < to)
    return n + from - to;
  else
    return to - from;
}

int main() {
  int N, Q;
  cin >> N >> Q;

  int l = 1, r = 2, ans = 0;
  rep(i, Q) {
    char H;
    int T;
    cin >> H >> T;
    if (H == 'L') {
      ans += move(N, l, T, r);
      l = T;
    } else {
      ans += move(N, r, T, l);
      r = T;
    }
  }
  cout << ans << endl;
}