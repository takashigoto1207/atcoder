#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> cls(K, 0);
  int A;
  rep(i, N) cin >> A, cls[A - 1]++;

  int mx = 0;
  rep(i, K) mx = max(mx, cls[i]);

  int ans = 0;
  rep(i, K) if (mx == cls[i] || mx == cls[i] + 1) ans++;
  cout << ans << endl;
  return 0;
}