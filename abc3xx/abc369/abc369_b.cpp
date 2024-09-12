#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A, l = 0, r = 0, ans = 0;
  char S;
  rep(i, N) {
    cin >> A >> S;
    if (S == 'L') {
      if (l) ans += abs(l - A);
      l = A;
    } else {
      if (r) ans += abs(r - A);
      r = A;
    }
  }
  cout << ans << endl;
  return 0;
}