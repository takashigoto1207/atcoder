#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B;
  cin >> A >> B;

  ll ans = 0;
  while (A != B) {
    if (A > B) swap(A, B);
    long long tmp = (B - 1) / A;
    B = B - tmp * A;
    ans += tmp;
  }
  cout << ans << endl;
  return 0;
}