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
  rep(i, N) cin >> A[i];

  sort(A.begin(), A.end());
  ll ans = 0;
  rep(i, N) {
    auto it = lower_bound(A.begin(), A.end(), A[i] / 2 + 1);
    ans += it - A.begin();
  }
  cout << ans << endl;
  return 0;
}