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
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int calc = A[0];
  rep(i, N) calc = gcd(calc, A[i]);

  int ans = 0;
  while (calc % 2 == 0) {
    calc /= 2;
    ans++;
  }
  cout << ans << endl;
  return 0;
}