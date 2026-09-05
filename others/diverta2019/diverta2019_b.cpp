#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int R, G, B, N;
  cin >> R >> G >> B >> N;

  ll ans = 0;
  rep(r, N / R + 1) rep(g, N / G + 1) {
    int calc = N - r * R - g * G;
    if (0 <= calc && calc % B == 0) ans++;
  }
  cout << ans << endl;
  return 0;
}