#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(2 * N);
  rep(i, 2 * N) cin >> A[i];

  int ans = 0;
  rep(i, 2 * N - 2) if (A[i] == A[i + 2]) ans++;
  cout << ans << endl;
  return 0;
}