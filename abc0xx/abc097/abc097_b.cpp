#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X;
  cin >> X;

  int ans = 1;
  int calc = 0;
  for (int i = 2; i <= 33; i++) {
    calc = i;
    while (calc * i <= X) {
      calc *= i;
      ans = max(ans, calc);
    }
  }
  cout << ans << endl;
  return 0;
}