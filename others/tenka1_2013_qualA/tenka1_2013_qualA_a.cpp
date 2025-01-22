#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int ans = 42;
  while (ans < 130000000) ans *= 2;
  cout << ans << endl;
  return 0;
}