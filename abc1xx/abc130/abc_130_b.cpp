#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> L(N);
  rep(i, N) cin >> L[i];

  int z = 0;
  int ans = 1;
  rep(i, N) {
    z += L[i];
    if (z <= X) ans++;
  }
  cout << ans << endl;
  return 0;
}