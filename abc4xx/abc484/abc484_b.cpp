#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K;
  cin >> K;

  vector<int> A(K);
  rep(i, K) cin >> A[i];

  bool nine = false;
  int ans = 10;
  rep(i, K) {
    if (A[i] == 9) nine = true;
    ans = min(ans, A[i]);
  }

  if (nine)
    cout << ans << endl;
  else
    cout << -1 << endl;

  return 0;
}