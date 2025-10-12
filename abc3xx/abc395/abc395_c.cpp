#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A, ans = INT_MAX;
  vector<int> X(1000001, 0);
  rep(i, N) {
    cin >> A;
    if (X[A] != 0) ans = min(ans, i - X[A] + 2);
    X[A] = i + 1;
  }

  if (ans == INT_MAX) ans = -1;
  cout << ans << endl;
  return 0;
}