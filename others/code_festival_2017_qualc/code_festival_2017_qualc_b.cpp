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

  int ans = 1, calc = 1;
  rep(i, N) ans *= 3;
  rep(i, N) if (A[i] % 2 == 0) calc *= 2;

  cout << ans - calc << endl;
  return 0;
}