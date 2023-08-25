#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int ans = 0;
  rep(i, A + 1) {
    rep(j, B + 1) {
      rep(k, C + 1) {
        if (i * 500 + j * 100 + k * 50 == X) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}