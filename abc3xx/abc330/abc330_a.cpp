#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L, A, ans = 0;
  cin >> N >> L;

  rep(i, N) {
    cin >> A;
    if (L <= A) ans++;
  }
  cout << ans << endl;
  return 0;
}