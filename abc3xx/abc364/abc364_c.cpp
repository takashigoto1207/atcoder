#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, X, Y;
  cin >> N >> X >> Y;

  vector<ll> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  sort(A.begin(), A.end(), greater<>());
  sort(B.begin(), B.end(), greater<>());

  int ans1 = 0, ans2 = 0;
  ll sx = 0, sy = 0;
  rep(i, N) {
    sx += A[i];
    ans1++;
    if (sx > X) break;
  }
  rep(i, N) {
    sy += B[i];
    ans2++;
    if (sy > Y) break;
  }
  cout << min(ans1, ans2) << endl;
  return 0;
}