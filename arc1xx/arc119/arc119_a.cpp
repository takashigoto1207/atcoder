#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll calc = 1;
  int cnt = 0;
  ll ans = LLONG_MAX;
  while (calc <= N) {
    ans = min(ans, N / calc + cnt + N % calc);
    calc *= 2;
    cnt++;
  }
  cout << ans << endl;
  return 0;
}