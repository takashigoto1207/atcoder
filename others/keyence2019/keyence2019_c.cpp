#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N), B(N), p;
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  ll calc = 0;
  int ans = 0;
  rep(i, N) {
    if (B[i] > A[i]) {
      calc += (A[i] - B[i]);
      ans++;
    } else if (B[i] < A[i]) {
      p.push_back(A[i] - B[i]);
    }
  }
  sort(p.rbegin(), p.rend());

  if (calc >= 0) {
    cout << ans << endl;
    return 0;
  }
  for (int x : p) {
    calc += x;
    ans++;
    if (calc >= 0) {
      cout << ans << endl;
      return 0;
    }
  }
  if (calc < 0) cout << -1 << endl;
  return 0;
}