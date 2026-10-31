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

  int ans = 0;
  rep(i, N) {
    if (A[i] == K)
      ans++;
    else if (i < N - 1 && (A[i] - K) * (A[i + 1] - K) < 0)
      ans++;
  }
  cout << ans << endl;
  return 0;
}