#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y, L, R, A, B;
  cin >> X >> Y >> L >> R >> A >> B;

  int ans = 0;
  for (int i = A; i < B; i++) {
    if (L <= i && i < R)
      ans += X;
    else
      ans += Y;
  }
  cout << ans << endl;
  return 0;
}