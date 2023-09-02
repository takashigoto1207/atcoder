#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int mina = INT_MAX, maxa = -INT_MAX;
  rep(i, N) cin >> A[i], mina = min(mina, A[i]), maxa = max(maxa, A[i]);

  int ans = (mina + maxa) * (maxa - mina + 1) / 2;
  rep(i, N) ans -= A[i];
  cout << ans << endl;
  return 0;
}