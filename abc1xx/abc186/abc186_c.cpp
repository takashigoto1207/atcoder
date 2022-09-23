#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool base(int n, int radix) {
  while (n) {
    if (n % radix == 7) return true;
    n /= radix;
  }
  return false;
}

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    if (base(i, 8) || base(i, 10))
      continue;
    else
      ans++;
  }
  cout << ans << endl;
  return 0;
}