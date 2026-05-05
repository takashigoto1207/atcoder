#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  int ans = 0;
  int xa = A, xb = B, xc = C;
  while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
    if (A == B && B == C) {
      cout << -1 << endl;
      return 0;
    }

    A = (xb + xc) / 2;
    B = (xc + xa) / 2;
    C = (xa + xb) / 2;
    xa = A, xb = B, xc = C;
    ans++;
  }
  cout << ans << endl;
  return 0;
}