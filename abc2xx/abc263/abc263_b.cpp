#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 2);
  rep(i, N - 1) cin >> A[i + 2];

  int ans = 0, x = N;
  while (x != 1) x = A[x], ans++;

  cout << ans << endl;
  return 0;
}