#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int t = i, calc = 0;
    while (t > 0) {
      calc += t % 10;
      t = t / 10;
    }
    if (A <= calc && calc <= B) {
      ans += i;
    }
    calc = 0;
  }
  cout << ans << endl;
  return 0;
}