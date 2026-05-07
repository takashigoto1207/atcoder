#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  // power of 10
  for (int i = 1; i <= 5; i++) {
    if (N == pow(10, i)) {
      cout << 10 << endl;
      return 0;
    }
  }

  // else
  int ans = 0;
  while (N > 0) ans += N % 10, N /= 10;
  cout << ans << endl;
  return 0;
}