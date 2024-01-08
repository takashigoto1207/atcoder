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
  int a, b, n;
  cin >> a >> b >> n;

  int s = a * b / gcd(a, b);
  int ans = s;
  while (ans < n) ans += s;
  cout << ans << endl;
  return 0;
}