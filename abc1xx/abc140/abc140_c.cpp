#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> B(N);
  rep(i, N - 1) cin >> B[i];

  int ans = 0;
  for (int i = 1; i < N - 1; i++) ans = ans + min(B[i], B[i - 1]);
  ans = ans + B[0] + B[N - 2];
  cout << ans << endl;
  return 0;
}