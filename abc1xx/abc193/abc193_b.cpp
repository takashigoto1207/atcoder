#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = INT_MAX;
  rep(i, N) {
    int A, P, X;
    cin >> A >> P >> X;
    if (X - A > 0) ans = min(ans, P);
  }
  if (ans == INT_MAX) ans = -1;
  cout << ans << endl;
  return 0;
}