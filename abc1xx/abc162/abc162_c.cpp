#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int K;
  cin >> K;

  int ans = 0;
  for (int x = 1; x <= K; x++) {
    for (int y = 1; y <= K; y++) {
      for (int z = 1; z <= K; z++) {
        ans += gcd(x, gcd(y, z));
      }
    }
  }
  cout << ans << endl;
  return 0;
}