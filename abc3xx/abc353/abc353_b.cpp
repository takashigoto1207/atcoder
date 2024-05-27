#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 0, m = 0;
  rep(i, N) {
    while (m + A[i] <= K && i < N) m += A[i], i++;
    ans++;
    m = A[i];
  }
  cout << ans + min(1, m) << endl;
  return 0;
}