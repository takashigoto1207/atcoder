#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 1;
  while (N > 0) ans *= 2, N--;
  cout << ans << endl;
  return 0;
}