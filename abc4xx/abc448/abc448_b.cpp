#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> C(M), Bx(M, 0);
  rep(i, M) cin >> C[i];

  int A, B, ans = 0;
  rep(i, N) {
    cin >> A >> B;
    Bx[A - 1] += B;
  }
  rep(i, M) ans += min(Bx[i], C[i]);
  cout << ans << endl;
  return 0;
}