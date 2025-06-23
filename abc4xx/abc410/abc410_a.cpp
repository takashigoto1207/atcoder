#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];
  cin >> K;

  int ans = 0;
  rep(i, N) if (K <= A[i]) ans++;
  cout << ans << endl;
  return 0;
}