#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, K;
  cin >> A >> K;

  if (K == 0) {
    cout << 2000000000000 - A << endl;
    return 0;
  }

  int ans = 0;
  while (A < 2000000000000) {
    A = (K + 1) * A + 1;
    ans++;
  }
  cout << ans << endl;
  return 0;
}