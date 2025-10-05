#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L, R;
  cin >> N >> L >> R;

  int X, Y, ans = 0;
  rep(i, N) {
    cin >> X >> Y;
    if (X <= L && R <= Y) ans++;
  }
  cout << ans << endl;
  return 0;
}