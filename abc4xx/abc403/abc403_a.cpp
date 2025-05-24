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

  int ans = 0;
  rep(i, N) if (i % 2 == 0) ans += A[i];
  cout << ans << endl;
  return 0;
}