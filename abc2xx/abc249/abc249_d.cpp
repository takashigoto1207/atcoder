#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  const int M = 200000;
  vector<ll> d(M + 1);
  rep(i, N) {
    int A;
    cin >> A;
    d[A]++;
  }
  ll ans = 0;
  for (int a = 1; a <= M; a++) {
    for (int b = 1; b <= M / a; b++) {
      int c = a * b;
      ans += d[a] * d[b] * d[c];
    }
  }
  cout << ans << endl;
  return 0;
}